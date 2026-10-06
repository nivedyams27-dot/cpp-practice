#include <iostream>
using namespace std;
int main () {
    string name;
    int rollNo;
    float marks;

    cout << "Enter roll number:";
    cin >> rollNo;
    cin.ignore();

    cout << "Enter name:";
    getline(cin, name);

    cout << "Enter marks:";
    cin >> marks;

    cout << "\n--- student record ---\n";
    cout << "Roll No:" << roll No << endl;
    cout << "Name:" << name << endl;
    cout << "Marks:" << marks << endl;
    
    return 0;
}