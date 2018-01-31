/* There are two methods to implement operator overloading */
/* You can either put it inside the class or outside the class,
 * whatever method you choose, the behavior will be the same. 
 *
 * To test method #1, comment out the prototype of method #2 in this file and 
 * the definition of method #2 in the .cpp file. To test method #2, do the
 * same thing but comment out method #1 in both files.
 *
 * */

class Phone {

    public:
        // Constructor
        Phone();

        // Default Constructor
        Phone(int n, int c);
      
        // Getters
        int getNumber() const;
        int getCost() const;

        /* ************************************* */
        // Method #1
        // Operator overloading inside class

        Phone operator+(const Phone &b);

        /* ************************************* */

    private:
        // Member variables
        int number;
        int cost;
};

/* ************************************* */
// Method #2
// Operator overloading outside class

//Phone operator+(const Phone &a, const Phone &b);

/* ************************************* */
