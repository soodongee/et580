#ifndef ENTRY_H_
#define ENTRY_H_

#include <iostream>

template <typename K, typename V>
class Entry {
public:
    Entry(const K& k = K(), const V& v = V()) : _key(k), _value(v) {}

    const K& key() const { return _key; }
    const V& value() const { return _value; }
    void setKey(const K& k) { _key = k; }
    void setValue(const V& v) { _value = v; }

    friend std::ostream& operator<<(std::ostream& os, const Entry& entry) {
        os << "{" << entry._key << "; " << entry._value << "}";
        return os;
    }

private:
    K _key;
    V _value;
};

#endif // ENTRY_H_
