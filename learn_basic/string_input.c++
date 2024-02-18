#include <iostream>
#include <string>
using namespace std;

int main(){
    string x;
    cout << "Enter the first name: ";
    cin >> x;
    cout << x;

    string y;
    cout << "\nEnter the full name: ";
    cin.ignore(); // Clear the newline character from the buffer
    getline(cin, y);
    cout << y;

    return 0;
}
