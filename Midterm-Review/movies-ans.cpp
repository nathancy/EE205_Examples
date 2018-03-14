#include <iostream>
#include <string>
#include <vector>

/* MT2 Solution. 
 * Note: This is what I would have done. Idk how Chris actually
 *       wants it since he didn't tell me anything and its vague
 * Compile with "g++ movies-ans.cpp" */

using namespace std;

class Actor {
    private:
        string name; // Name of actor 
        int age;     // Age of actor 
    public:
        // Default constructor 
        Actor() :
            name(""),
            age(0) {}

        // Overloaded constructor 
        Actor(string n, int a) :
            name(n),
            age(a) {}

        // Getter
        string getName() {
            return name;
        }
};

class User {
    private:
        Actor favoriteActor;
    public:
        // Overloaded constructor
        User(Actor favA) :
            favoriteActor(favA) {}

        // Getter
        Actor GetFav() {
            return favoriteActor;
        }
};

class Movie {
    protected:
        string name;             // Movie name
        int genre;               // Not sure why uncle chris made this parameter an integer type
        int rating;              // Movie rating 
        vector<Actor> cast;      // Movie cast list
    public:
        // Default constructor 
        Movie() :
            // Why is there no initialization for the "cast" parameter? 
            // No need to initialize it, as it gets automatically initialized in 
            // the constructor of your class and deallocated when your class is destroyed.
            // The vector gets constructed automatically before your constructor is called and is 
            // destroyed automatically when your object is deallocated, you don't need to care about it 
            // (also, the default copy constructor and assignment operator will handle copying gracefully automatically).
            name(""),
            genre(0),
            rating(0) {}

        // Overloaded constructor 
        Movie(string n, int g, int r, vector<Actor> c) :
            name(n),
            genre(g),
            rating(r),
            cast(c) {}

        // Check to see if actor in movie
        bool actorInMovie(string n) {
            vector<Actor>::iterator it;
            for(it = cast.begin(); it != cast.end(); it++) {
                if ((*it).getName() == n) {
                    return true;
                }
            }
            return false;
        }

        // Getter 
        string getMovieName() {
            return name;
        }

        // Pure virtual function
        // NOTE: Also could have made this function return some parameter
        // if a Movie base pointer was given but since it didn't specify, I 
        // decided to use a pure virtual function.
        virtual void DisplayInfo()=0;
};

// Chris "Unko" Manloloyo spelled independent wrong. FeelsBadKappa
class IndependantFilm : public Movie {
    private:
        vector<string> Contributors; // List of contributors
    public:
        // Default constructor
        IndependantFilm() {
        }

        // Overloaded constructor 
        IndependantFilm(string n, int g, int r, vector<Actor> cast_, vector<string> contributors_) :
            // Call the base class constructor
            Movie(n, g, r, cast_),
            Contributors(contributors_) {}

        // Print all contributors
        virtual void DisplayInfo() override {
            cout << "Contributors: " << endl;

            // Create an iterator to iterate through string vector
            vector<string>::iterator it;
            for(it = Contributors.begin(); it != Contributors.end(); it++) {
                cout << *it << endl;
            }
        }
};

class StudioFilm : public Movie {
    private:
        string studioName;
    public:
        // Default constructor
        StudioFilm() :
            studioName("") {}

        // Overloaded constructor 
        StudioFilm(string n, int g, int r, vector<Actor> cast_, string s) :
            Movie(n, g, r, cast_),
            studioName(s) {}
        
        // Print studio name
        virtual void DisplayInfo() override {
            cout << "Studio name: " << endl;
            cout << this->studioName;
        }
};

// Given the vector of choosen movies by a user, print all the movie names
// from the vector that feature the users favorite actor and return the number of movies printed
int Recommended_Movies(vector<Movie*> mv, User u) {
    // Creating iterator for Movies
	std::vector<Movie*>::iterator it;
    // Counter for number of movies
    int number_of_movies = 0;
    
    cout << "Recommended movies: " << endl;
    for(it = mv.begin(); it != mv.end(); it++) {
        // Get the user's favorite actor
        string actor_name = u.GetFav().getName();
        // Check to see if that actor is in the movie
        if ((*it)->actorInMovie(actor_name)) {
            cout << (*it)->getMovieName() << endl;
            number_of_movies++;
        }
    }
    return number_of_movies;
}

// Display the studio or the contributors depending on the pointer type given
void PrintStudio(Movie *m) {
    m->DisplayInfo();
}

int main(){
    /* Chris's example */
    // Let's just initialized some actors, users, and movies. We didn't use your constructors here so,
    // make sure you've included the constroctors for this code to work if you plan to compile.
    // Basically, we are using this as a test driver for our functions and classes.
    Actor a1,a2,a3,a4,a5;
    User user1(a1), user2(a5), user3(a1), user4(a3);
    IndependantFilm iF1, iF2, iF3;
    StudioFilm sF1, sF2, sF3;

    // Here we try to simulate a vector of slected movies by user 1
    vector<Movie*> selectedMovies;
    selectedMovies.push_back(&iF3);
    selectedMovies.push_back(&sF2);
    selectedMovies.push_back(&sF3);

    // lmao he doesnt even use "num" 
    int num = Recommended_Movies(selectedMovies, user1); // Here the function should print recommended movies if there are any

    PrintStudio(&sF1); // Here the studio should be printed for the movie sF1.
    PrintStudio(&iF3); // Here the contributors should be printed for the movie iF3.

    /* ***************************************************************************** */
    /* My example that actually uses his functions instead of just printing out nothing */
    /* ***************************************************************************** */
    cout << "************************************" << endl;

    // Create actors and users
    Actor toast("Toast", 27);
    Actor janet("Janet", 23);
    User toastUser(toast); 
    User janetUser(janet); 

    // Vector to hold Actor casts (for IndependantFilm)
    vector<Actor> JOAST_cast;
    JOAST_cast.push_back(toast);
    JOAST_cast.push_back(janet);

    // Vector to hold Studio casts (for StudioFilm)
    vector<Actor> JOAST_production_cast;
    Actor fed("Fedmyster", 24);
    Actor pecca("Pecca", 27);
    Actor jenny("Jenny", 25);
    JOAST_production_cast.push_back(fed);
    JOAST_production_cast.push_back(pecca);
    JOAST_production_cast.push_back(jenny);

    // Vector to hold contributors (for IndependantFilm)
    vector<string> JOAST_contributors;
    JOAST_contributors.push_back("William");
    JOAST_contributors.push_back("Chris");
    JOAST_contributors.push_back("Lily");
    JOAST_contributors.push_back("Albert");

    // Create dank Movie
    IndependantFilm JOASTisNotAMeme("JOAST", 0, 10, JOAST_cast, JOAST_contributors);
    selectedMovies.push_back(&JOASTisNotAMeme);

    // Create meme Studio
    StudioFilm OfflineTV("JOASTisNotAMeme", 0, 10, JOAST_production_cast, "Offline TV");

    // Print all movies that have feature the user's favorite actor
    Recommended_Movies(selectedMovies, toastUser); 
    cout << endl;

    // Print studio or all contributors depending on the pointer given
    PrintStudio(&OfflineTV);
    cout << endl;
    cout << endl;
    PrintStudio(&JOASTisNotAMeme);
}
