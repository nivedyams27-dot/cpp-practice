#include <iostream>
using namespace std;
int main () {
    string name;
    int rollNo;
    float marks;

    cout << "Enter name:" << endl;
    getline(cin, name);

    cout << "Enter roll number:" << endl;
    cin >> rollNo;

    cout << "Enter marks:" << endl;
    cin >> marks;

    cout << "\n--- student record ---\n";
    cout << "roll number :" << rollNo << endl;
    cout << "Name        :" << name << endl;
    cout << "Marks       :" << marks << endl;
    
    return 0;
}