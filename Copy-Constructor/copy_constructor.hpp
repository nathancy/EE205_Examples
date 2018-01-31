#include <iostream>

class Pencil {

    public:
        // Default Constructor
        Pencil();

        // Overloaded Constructor
        Pencil(std::string c, int initial_cost);
        
        // Copy Constructor 
        Pencil(const Pencil &old);

        // Getters
        std::string getColor();
        int getCost();

    private:
        std::string color;
        int cost;
};


