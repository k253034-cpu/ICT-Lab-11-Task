#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int rollNumber;

    void showRoll() {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student s;

    s.name = "Ali";
    s.age = 20;
    s.rollNumber = 123;

    s.display();
    s.showRoll();

    return 0;
}
