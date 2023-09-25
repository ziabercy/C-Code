#include <iostream>
#include <string>
using namespace std;

// Zia Bercy
/* Purpose: Fortune teller to tell user their lucky number
and matching personality description and fortune and whether their
significant other loves them or not.*/
/* Input: Name and if they wan't to see if their significant other
loves them or not. */
// Output: Lucky number, fortune, personality, and loves or not
/* Brief Algorithm: 
    1. initialize functions
    2. delcare variables in main for name and choice from menu
    3. call welcome function
    4. call lucky number function to get user input for name and print lucky number
    5. ask user if they want to continue or find partner love or quit
    6. call function to get user input for partner name and print if they love them or not
*/
// function prototypes
int luckyNumber(string name);
string fortune(int number);
string personality(int number);
bool partnerlove(string partner);
void welcome();
void printDaisy(int n);

//main function
int main() {

    string name;
    int choice;
// calling welcome function to introduce user to the fortune teller
    welcome();

    while (choice != 3) {

        if (choice == 1) {
        cout << "Enter your name: ";
        getline(cin, name);
// calling lucky number function
        int number = luckyNumber(name);

        cout << "Your lucky number is: " << number << endl;
        cout << "Your fortune is: " << fortune(number) << endl;
        cout << "Your matching personality is: " << personality(number) << endl;

        // Print daisy with petals
        cout << "Here's a daisy with " << (10 - number) << " petals left:" << endl;
        printDaisy(10 - number);
   
        cout << "Enter 1 to continue getting fortunes, 2 to check on someone's feelings, or 3 to quit: ";
        cin >> choice;
        }
        
        else if (choice == 2) {
            string partnerName;

            cout << "Enter your partner's name: ";
            cin >> partnerName;
// calling partner love function
            bool loves = partnerlove(partnerName);
            if (loves %2 == 0) {
                cout << "Your partner loves you!" << endl;
        }   else {
                cout << "Your partner does not love you." << endl;
        }
            cout << "Enter 1 to continue getting fortunes, 2 to check on someone's feelings, or 3 to quit: ";
            cin >> choice;
        }
// if user wants to quit
        else if (choice == 3) {
            cout << "Thank you for using the fortune teller. Goodbye!" << endl;
        }
        
    }
    
    return 0;
}


// Function to calculate lucky number
int luckyNumber(string name) {
    int sum = 0;
    for (int i = 0; i < name.length(); i++) {
        sum += tolower(name[i]) - 'a' + 1;
    }
    while (sum > 10) {
        int digits_sum = 0;
        while (sum > 0) {
            digits_sum += sum % 10;
            sum /= 10;
        }
        sum = digits_sum;
    }
    return sum;
}


// Function to give a fortune
string fortune(int number) {
    string fortunes[10] = {"You will meet someone special soon.",
                           "You will receive good news in the near future.",
                           "Your hard work will pay off.",
                           "A new opportunity will arise.",
                           "You will make new friends.",
                           "You will find inner peace.",
                           "You will travel to a new place.",
                           "You will learn something valuable.",
                           "Your creativity will be rewarded.",
                           "You will overcome a challenge."};
    return fortunes[number - 1];
}

// Function to give matching personality
string personality(int number) {
    string personalities[10] = {"You are a natural leader.",
                                "You have a kind heart.",
                                "You are intelligent and curious.",
                                "You have a great sense of humor.",
                                "You are creative and imaginative.",
                                "You are adventurous and daring.",
                                "You are honest and trustworthy.",
                                "You are patient and understanding.",
                                "You are confident and ambitious.",
                                "You are a good listener."};
    return personalities[number - 1];
}

bool partnerlove(string partner) {
    string partnerName;
    int partnerNum = luckyNumber(partnerName);
}

void welcome() {
    cout << "   Welcome To The Mystic Fortune Teller!     " << endl;
    cout << "*********************************************" << endl;
    cout << endl;
    cout << "  You will be able to see your lucky number," << endl << "personality, fortune, and if your significant" << endl << "        other loves you or not." << endl;
    cout << endl;
}

// Function to print daisy with petals
void printDaisy(int n) {
    cout << "   ,-" << endl;
    for (int i = 0; i < n; i++) {
        cout << "   \\|/" << endl;
        cout << "    |" << endl;
    }
    cout << "   /|\\" << endl;
    cout << "   '" << endl;
}