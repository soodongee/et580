template <typename D>
class Iterator; 

template <typename D>
class NodeListG; 

template <typename D>
class DNode {
private:
    D data;
    DNode* next;
    DNode* prev;

    friend class Iterator<D>;
    friend class NodeListG<D>;

public:
    DNode() : next(nullptr), prev(nullptr) {}
    DNode(const D& e) : data(e), next(nullptr), prev(nullptr) {}
};


