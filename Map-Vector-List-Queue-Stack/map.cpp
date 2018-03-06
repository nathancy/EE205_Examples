#include <iostream>
#include <map>       // standard library for map
#include <iterator>  // standard library for iterator
#include <string>

/* Compile with "g++ map.cpp"
 *
 * Map is a type of data structure and is an associative
 * container that stores elements in key-value pair
 *
 * Stores only unique keys in sorted order therefore searching 
 * for an element in map through key is very fast (logarithmic time)
 *
 * There is always only one value attached with each key
 *
 * SYNTAX FOR INITIALIZING MAP (key, value)
 *
 *           KEY    VALUE
 *           ||     ||
 *           \/     \/
 * std::map <type1, type2> variableName;
 *
 * SYNTAX FOR INSERTING INTO MAP 
 *
 * variableName["key"] = value
 *
 * SYNTAX FOR ITERATING THROUGH ALL ELEMENTS
 *
 * std::map<type1, type2>::iterator it = variableName.begin() 
 * 
 * access key with it->first and value by it->second
 *
 * Theres a ton of other functions associated with map:
 * begin(), end(), size(), empty(), erase(), clear(), find(), count() and many more
 *
 * */

int main() {

    // Initializing map
    // key: name of fruit
    // value: cost of fruit
    std::map<std::string, int> fruitBasket;

    // Inserting data into std::map
    fruitBasket["Orange"] = 3;
    fruitBasket["Watermelon"] = 6;
    fruitBasket["Apple"] = 4;

    // Iterating through all map elements
    std::map<std::string, int>::iterator it = fruitBasket.begin();
    while(it != fruitBasket.end()) 
    {
        // Print out key and value pair
        std::cout << it->first << " :: " << it->second << std::endl;
        it++;
    }
}
