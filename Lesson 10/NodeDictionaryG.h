#ifndef NODEDICTIONARYG_H_
#define NODEDICTIONARYG_H_

#include "MapG.h"
#include "IteratorG.h"
#include "DNodeG.h"

template <typename K, typename V>
class NodeDictionaryG : public MapG<IteratorG<K, V>, K, V> {
private:
    int n;
    DNodeG<K, V>* header;
    DNodeG<K, V>* trailer;

public:
    NodeDictionaryG() : n(0), header(new DNodeG<K, V>()), trailer(new DNodeG<K, V>()) {
        header->next = trailer;
        trailer->prev = header;
    }

    ~NodeDictionaryG() {
        std::cout << "Destroying dictionary..." << std::endl;
        while (!empty()) {
            std::cout << "Erasing: " << begin().getNode()->elem.key() << std::endl;
            erase(begin());
        }
        delete header;
        delete trailer;
    }

    bool empty() const override {
        return n == 0;
    }

    int size() const override {
        return n;
    }

    IteratorG<K, V> begin() const override {
        return IteratorG<K, V>(header->next);
    }

    IteratorG<K, V> end() const override {
        return IteratorG<K, V>(trailer);
    }

    IteratorG<K, V> find(const K& k) const override {
        for (IteratorG<K, V> it = begin(); it != end(); ++it) {
            if (it.getNode() && it.getNode()->elem.key() == k)
                return it;
        }
        return end();
    }

    IteratorG<K, V> put(const K& k, const V& v) override {
        IteratorG<K, V> it = find(k);
        if (it.isValid()) {
            it.getNode()->elem.setValue(v);
            return it;
        } else {
            DNodeG<K, V>* newNode = new DNodeG<K, V>();
            newNode->elem.setKey(k);
            newNode->elem.setValue(v);
            newNode->next = trailer;
            newNode->prev = trailer->prev;
            trailer->prev->next = newNode;
            trailer->prev = newNode;
            n++;
            return IteratorG<K, V>(newNode);
        }
    }

    void erase(const K& k) override {
        IteratorG<K, V> it = find(k);
        if (it != end()) {
            erase(it);
        }
    }
    
    

    void erase(const IteratorG<K, V>& p) override {
        if (p.isValid() && p.getNode() != header && p.getNode() != trailer) {
            DNodeG<K, V>* node = p.getNode();
            node->prev->next = node->next;
            node->next->prev = node->prev;
            delete node;
            n--;
        }
    }
};

#endif // NODEDICTIONARYG_H_

