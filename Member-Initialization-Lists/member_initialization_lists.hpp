/* Example on how to use Constructors with the normal way
 * and the member initialization list way. 
 *
 * Note: This example does not compile. Look in the .cpp file 
 * to see the two ways to implement a constructor */

#include <string>

class Rectangle {
    // Member functions
    public: 
        // Default constructor
        Rectangle();

        // Overloaded constructor
        Rectangle(int w, int l, std::string name);

    // Member variables
    private:
        int width;
        int length;
        std::string rectangle_name;
}
