// Zia Bercy
// Purpose: A program to compute test average of 5 test scores
// Input: 5 test scores
// Output: average of 4 highest scores

// 1. get user input using getScore() function 5 times
// 2. validate scores to be between 0 and 100
// 3. using calcAverage() to calculate and display average, get 5 scores as param
// 4. call findLowest( in calcAverage()
// 5. calculate and display average using 4 highest

#include <iostream>
#include <iomanip>
using namespace std;

int findLowest(int [], int);

void getScore(int & score) {
    cout << "Enter a score: ";
    cin >> score;

    while (score < 0 || score > 100) {
        cout << "invalid score. please reenter" << endl;
        cin >> score;
    }
}

void calcAverage(int Scores[], int size) {
    int small;
    small = findLowest(Scores, size);
    int total;
    for (int count = 0; count < size; count++) {
        total += Scores[count];
    }
    total = total - small;
    float average = total / 4;
    
    cout << "Your average after dropping the lowest grade is: ";
    cout << fixed<<setprecision(2)<< average << endl;
}

int findLowest(int Scores[], int Size) {

    int size = 5;
    int myScores[Size];

    int count;
    int lowest;
    lowest = Scores[0];
    for (count = 1; count < Size; count++) {
        getScore(myScores[Size]);
    }
    return lowest;
}


int main() {
    
    int Size = 5;
    int myScores[Size]; // array to hold the input scores
    int i;
    for (i = 0; i < 5; i++) {
        getScore(myScores[i]);
    }

    calcAverage(myScores, Size);
    

    return 0;
}
