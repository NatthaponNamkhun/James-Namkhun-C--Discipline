#include<iostream>
using namespace std;

// main function
int main() {
    int age1;
    int age2;
    int sumAge;
    
    cout << "Personal 1 : ";
    cin >> age1;
    cout << "Personal 2 : ";
    cin >> age2;
    sumAge = (age1 + age2) * 2;
    cout << "SUM of People age = " << sumAge << endl;

    return 0;
}