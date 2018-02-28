#include <iostream>
// Compile with "g++ class-template.cpp"
//
// Like function templates, class templates are useful when a class
// defines something that is independent of data type

template <typename T>
class Polygon {
    private:
        T width;
        T height;
    public:
        Polygon(T w, T h) :
            width(w),
            height(h) {}
        T area() {
            return width * height;
        }
};

int main() {
    Polygon <int> square(10, 5);
    Polygon <double> rectangle(2.5, 2.5);

    std::cout << square.area() << std::endl;
    std::cout << rectangle.area() << std::endl;
}
