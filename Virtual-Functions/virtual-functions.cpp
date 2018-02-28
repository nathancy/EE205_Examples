#include <iostream>
// Compile with "g++ virtual-functions.cpp"
// A virtual function is a member function that is declared in the base class
// and redefied in a derived class

// Base class
class Polygon {
    protected:
        int width;
        int height;
    public:
        void set_values(int a, int b) {
            width = a;
            height = b;
        }
        virtual int area() {
            return 0;
        }
};

// Derived class
class Rectangle: public Polygon {
    public:
        virtual int area() override {
            return width * height;
        }
};

// Derived class
class Triangle: public Polygon {
    public:
        virtual int area() override {
            return (width * height / 2);
        }
};

int main() {
    Polygon poly;
    Rectangle rect;
    Triangle trgl;

    Polygon *p1 = &poly; // Base pointer pointing to base Polygon class
    Polygon *p2 = &rect; // Base pointer pointing to derived Rectangle class
    Polygon *p3 = &trgl; // Base pointer pointing to derived Triangle class

    p1->set_values(4,5); // Same as poly.set_values(4,5);
    p2->set_values(4,5); // Same as rect.set_values(4,5);
    p3->set_values(4,5); // Same as trgl.set_values(4,5);

    std::cout << p1->area() << std::endl;
    std::cout << p2->area() << std::endl;
    std::cout << p3->area() << std::endl;
}
