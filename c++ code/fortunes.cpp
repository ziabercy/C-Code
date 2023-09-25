// Zia Bercy
/* Purpose: Fortune teller to tell user their lucky number
and matching personality description and fortune and whether their
significant other loves them or not.*/
/* Input: Name and if they wan't to see if their significant other
loves them or not. */
// Output: Lucky number, fortune, personality, and loves or not

#include <iostream>
#include <map>
#include <cctype>
#include <string>
#include <vector>


using namespace std;

void welcome();
void partner_love(string partnerName);
void init(char _letters[], int _length, map<char, int>& _map);
int calcWordVal(map<char, int>& _map);
void fortune(vector<string> fortune, int luckyNumber);

int main()
{

    char letters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    map<char, int> myMap;

    int length = sizeof(letters) / sizeof(letters[0]);
    int wordValue;
    int luckyNum;
    
    welcome();

    init(letters, length, myMap);

    wordValue = calcWordVal(myMap);

    string strWordValue = to_string(wordValue);
    int i = 0;
    while (i < strWordValue.length()) {
        luckyNum += strWordValue[i] - '0';
        i++;
    }

    
    cout << "Your lucky number is " << luckyNum << "\n";

    fortune(fortunes, luckyNumber);

    string partner_name;
    partner_love(partner_name);


    return 0;
}

void welcome() {

    cout << "  Welcome to the Mystic Fortune Teller!" << endl;
    cout << "******************************************" << endl;
    cout << endl;
    cout << "You will be able to see the following fortunes:" << endl;
    cout << "1. Your lucky number and personality description" << endl;
    cout << "2. Your fortune" << endl;
    cout << "3. Does your significant love you or not" << endl;
    cout << endl;
 
}

void init(char _letters[], int _length, map<char, int>& _map)
{
    int count = 1;
    for (int i = 0; i < _length; i++) {
        if (count > 9) {
            count = 1;
        }
        _map[_letters[i]] = count;
        count++;
    }
}

int calcWordVal(map<char, int>& _map) {
    string name;
    cout << "Enter a name: \n";
    getline(cin, name);

    int length = sizeof(name);
    int sum = 0;

    for (char c : name) {
        c = toupper(c);
        sum += _map[c];
    }

    return sum;
}

void partner_love(string partnerName) {
    int partner_name;
    cout << "Enter partner name: ";
    cin >> partner_name;

    bool lovesMe = true;
    int partnerLuckyNumber = calcWordVal(partnerName);

    for (int i = 1; i <= partnerLuckyNumber; i++) {
        if (lovesMe) {
            cout << "Loves Me" << endl;
            lovesMe = false;
        }
        else {
            cout << "Does Not Love Me" << endl;
            lovesMe = true;
        }
    }
    
    if (lovesMe) {
        cout << partner_name << " does not love you." << endl;
    }
    else {
        cout << partner_name << " loves you." << endl;
    }
}


void fortune(vector<string> fortune, int luckyNumber) {
    string personality;
    switch(luckyNumber) {
        case 1:
            personality = "bubbly";
            break;
        case 2:
            personality = "confident";
            break;
        case 3:
            personality = "introvert";
            break;
        case 4:
            personality = "creative";
            break;
        case 5:
            personality = "empathetic";
            break;
        case 6:
            personality = "adventurous";
            break;
        default:
            personality = "lucky";
            break;
    }

    vector<string> fortunes = {
        "You will have good luck and fortune.",
        "You will find success.",
        "You will find love and happiness.",
        "You will be surrounded by loving and supportive people.",
    };

}
