#include<iostream>
#include<string>

using namespace std;

// Create function: find Circle area
int areaOfCircle(float radius) {
     return 3.1415 * radius * radius;
}

int main() {
    int radius;
    for (int i = 0; i < 5; i++) {
        cout << "Insert radius: ";
        cin >> radius;
        int areaCircle = areaOfCircle(radius);
         cout << "areaCircle: " << areaCircle << endl;
    }
    return 0;
}