template <typename E, typename C, typename R>
class PriorityQueueG {
public:
    virtual ~PriorityQueueG() = default;
    virtual int size() const = 0;
    virtual bool isEmpty() const = 0;
    virtual void insert(const E& e) = 0;
    virtual const E& min() const noexcept(false) = 0; 
    virtual void removeMin() noexcept(false) = 0;    
};
