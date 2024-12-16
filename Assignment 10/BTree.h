
template <typename L, typename P>
class BTree {
public:
    virtual ~BTree() = default;

    virtual int size() const = 0;
    virtual bool empty() const = 0;
    virtual P root() const = 0;
    virtual L positions() = 0; 
};


