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

int luckyNumber(string name);
string fortune(int number);
string personality(int number);
bool partnerlove(string partner);
void welcome();
void menu();

int main() {

    string name;
    int choice;

    welcome();

    while (choice == 1 || choice == 2) {

        cout << "Enter your name: ";
        getline(cin, name);

        int number = luckyNumber(name);

        cout << "Your lucky number is: " << number << endl;
        cout << "Your fortune is: " << fortune(number) << endl;
        cout << "Your matching personality is: " << personality(number) << endl;

        menu();
        cout << "Enter 1 to continue getting fortunes, 2 to check on someone's feelings, or any other key to exit: ";
        cin >> choice;

        if (choice == 2) {
            string partnerName;

            cout << "Enter your partner's name: ";
            cin >> partnerName;

            bool loves = partnerlove(partnerName);
            if (loves %2 == 0) {
                cout << "Your partner loves you!" << endl;
        }   else {
                cout << "Your partner does not love you." << endl;
        }
        }
  
    }
    cout << "Thank you for using the fortune teller. Goodbye!" << endl;
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

void menu() {
    string name;
    int choice;

    while (choice == 1 || choice == 2) {

        cout << "Enter your name: ";
        getline(cin, name);

        int number = luckyNumber(name);

        cout << "Your lucky number is: " << number << endl;
        cout << "Your fortune is: " << fortune(number) << endl;
        cout << "Your matching personality is: " << personality(number) << endl;

        cout << "Enter 1 to continue getting fortunes, 2 to check on someone's feelings, or any other key to exit: ";
        cin >> choice;

        if (choice == 2) {
            string partnerName;

            cout << "Enter your partner's name: ";
            cin >> partnerName;

            bool loves = partnerlove(partnerName);
            if (loves) {
                cout << "Your partner loves you!" << endl;
        }   else {
                cout << "Your partner does not love you." << endl;
        }
        }
    }
}
