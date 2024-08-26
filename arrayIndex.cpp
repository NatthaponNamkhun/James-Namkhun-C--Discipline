#include<iostream>
using namespace std;

// array index
int main() {
    int ages[2];
    int sumAge;
    
    cout << "Personal 1 : ";
    cin >> ages[0];
    cout << "Personal 2 : ";
    cin >> ages[1];
    sumAge = (ages[0] + ages[1]);
    cout << "SUM of People age = " << sumAge << endl;

    return 0;
}