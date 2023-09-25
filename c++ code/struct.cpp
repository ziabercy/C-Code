// Zia Bercy
// Purpose: Using structs to collect movie data
// Input: No user input, just move info in code
// Output: movie info data


#include <iostream>
#include <string>
using namespace std;

// Define the MovieData structure
struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime;
};

// Define the function to display movie information
void displayMovie(const MovieData& movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << " minutes" << endl;
    cout << endl;
}

int main() {
    // two MovieData variables to store values in their members
    MovieData movie1 = {"The Lion King", "Samuel Smith", 2005, 201};
    MovieData movie2 = {"Avengers: Infinity War", "Richard Gray", 2018, 192};

    // Passing each movie variable to the displayMovie function to display the information
    displayMovie(movie1);
    displayMovie(movie2);

    return 0;
}