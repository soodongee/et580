#ifndef MAPG_H_
#define MAPG_H_

template <typename I, typename K, typename V>
class MapG {
public:
    virtual ~MapG() = default;
    virtual int size() const = 0;
    virtual bool empty() const = 0;
    virtual I find(const K& k) const = 0;
    virtual I put(const K& k, const V& v) = 0;
    virtual void erase(const K& k) = 0;
    virtual void erase(const I& p) = 0;
    virtual I begin() const = 0;
    virtual I end() const = 0;
};

#endif // MAPG_H_
