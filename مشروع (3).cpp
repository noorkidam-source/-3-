
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    float mark;

public:
    // Constructor to initialize data
    Student(int i, string n, float m) {
        id = i;
        name = n;
        mark = m;
    }

    // Member function to display student info
    void display() {
        cout << " ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Mark: " << mark << endl;
    }
};

int main() {
    // Create an object of Student and initialize data
    Student s1(101, "Zainab", 92.5);

    // Display student information
    s1.display();

    return 0;
}
    