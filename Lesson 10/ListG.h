
template <typename T, typename I>
class ListG{
public:
    virtual ~ ListG() = default;

    virtual int size() const = 0;
    virtual bool empty() const = 0;

    virtual I begin() const = 0;
    virtual I end() const = 0;
    virtual void insertFront(const T& e)  = 0;
    virtual void insertBack(const T& e)  = 0;
    virtual void insert(const I &p, const T& e)  = 0;
    virtual void eraseFront() = 0;
    virtual void eraseBack() = 0;
    virtual void erase(const I &p) = 0;

};

