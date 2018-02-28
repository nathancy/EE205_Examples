#include <iostream>
// Compile with "g++ abstract-base-class.cpp"
//
// An abstract base class are classes that can only be used as base class
// and are allowed to have virtual member functions without definition. 
// These functions are known are pure virtual functions. The syntax
// is to replace their definition by =0; (an equal sign and a zero)
//
// Classes that contain at least one pure virtual function are known
// as abstract base classes. 

// Abstract base class
class IPolygon {
    protected:
        int width;
        int height;
    public:
        void set_values(int a, int b) {
            width = a;
            height = b;
        }
        // This function is a pure virtual function
        //
        // This function has no definition and has been replaced by =0,
        // which makes it a pure virtual function. 
        virtual int area(void)=0;
};

class Rectangle: public IPolygon {
    public:
        virtual int area(void) override {
            return width * height;
        }
};

class Triangle: public IPolygon {
    public:
        virtual int area(void) override {
            return (width * height /2);
        }
};

int main() {
    Rectangle rect;
    Triangle trgl;
    IPolygon *p1 = &rect;
    IPolygon *p2 = &trgl;
    
    p1->set_values(4,5);
    p2->set_values(4,5);
    std::cout << p1->area() << std::endl;
    std::cout << p2->area() << std::endl;
}
