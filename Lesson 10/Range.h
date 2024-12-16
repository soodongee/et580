template <typename K, typename V>
class IteratorG;

template <typename K, typename V>
class Range { // an iterator range

private:

    IteratorG<K,V> _begin; // front of range

    IteratorG<K,V> _end; // end of range

public:

    Range(const IteratorG<K,V>& b, const IteratorG<K,V>& e) : _begin(b), _end(e) { }

    IteratorG<K,V>& begin() { return _begin; } // get beginning

    IteratorG<K,V>& end() { return _end; } // get end

};
