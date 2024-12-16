#include <vector>

template<typename T>
class NodeListG {
private:
    std::vector<T> list;

public:
    void push_back(const T& e) {
        list.push_back(e);
    }
    typename std::vector<T>::iterator begin() {
        return list.begin();
    }
    typename std::vector<T>::iterator end() {
        return list.end();
    }
    size_t size() const {
        return list.size();
    }
    bool empty() const {
        return list.empty();
    }


};