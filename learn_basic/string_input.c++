#include <iostream>
#include <string>
using namespace std;

int main(){
    string x;
    cout << "Enter the first name: ";
    //used cin
    cin >> x;
    cout << x;

    string y;
    cout << "\nEnter the full name: ";
    cin.ignore(); // Clear the newline character from the buffer
    // used getline 
    getline(cin, y);
    cout << y;

    return 0;
}
