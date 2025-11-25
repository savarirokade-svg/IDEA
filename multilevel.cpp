#include <iostream>
using namespace std;

// -------------------------------
// Base class
// -------------------------------
class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void showPerson() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

// -------------------------------
// Derived class (Single Inheritance)
// -------------------------------
class Student : public Person {
protected:
    int roll;

public:
    void setStudent(string n, int a, int r) {
        setPerson(n, a);
        roll = r;
    }

    void showStudent() {
        showPerson();
        cout << "Roll No: " << roll << endl;
    }
};

// -------------------------------
// Derived from Student (Multilevel Inheritance)
// -------------------------------
class Result : public Student {
    float ma
