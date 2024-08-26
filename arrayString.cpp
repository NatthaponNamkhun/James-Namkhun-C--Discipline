#include<iostream>
#include<string>

using namespace std;

// array String
int main() {
    int ages[2];
    int sumAge;
    
    cout << "Personal 1 : ";
    cin >> ages[0];
    cout << "Personal 2 : ";
    cin >> ages[1];
    sumAge = (ages[0] + ages[1]);
    cout << "SUM of People age = " << sumAge << endl;

    string name;
    cout << "What is your name?: ";
    cin >> name;
    cout << "Your name is = " << name << endl;
    cout << "Spending your name " << endl;
    cout << name[0] << endl;
    cout << name[1] << endl;
    cout << name[2] << endl;
    cout << name[3] << endl;
    cout << name[4] << endl;
    char firstCharacter = name[0];
    cout << "firstCharacter in your name : " << firstCharacter << endl;

    return 0;
}
