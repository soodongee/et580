class Point2DSTL {
private:
    double x, y;

public:
    Point2DSTL() : x(0), y(0) {}
    Point2DSTL(double xcoord, double ycoord) : x(xcoord), y(ycoord) {}

    double getX() const { return x; }
    double getY() const { return y; }
    
    friend std::ostream& operator<<(std::ostream& out, const Point2DSTL& q) {
        out << "(" << q.getX() << ", " << q.getY() << ")";
        return out;
    }
};

class LeftRight {
public:
    bool operator()(const Point2DSTL& p, const Point2DSTL& q) const {
        return p.getX() < q.getX();
    }
};
