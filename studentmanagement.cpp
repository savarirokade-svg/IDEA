#include <iostream>
#include <vector>
#include <fstream>
#include <memory>
using namespace std;

// -------------------------------
// Base Class
// -------------------------------
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}
    virtual void display() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }

    virtual ~Person() {
        // Virtual destructor for safety
    }
};

// -------------------------------
// Derived Class - Student
// -------------------------------
class Student : public Person {
    int roll;
    float cgpa;

public:
    Student(string n, int a, int r, float c)
        : Person(n, a), roll(r), cgpa(c) {}

    void display() override {
        cout << "----- Student Info -----\n";
        Person::display();
        cout << "Roll No: " << roll << "\nCGPA: " << cgpa << endl;
    }

    string to_string_format() {
        return name + " " + std::to_string(age) + " "
            + std::to_string(roll) + " " + std::to_string(cgpa);
    }
};

// -------------------------------
// Student Manager
// -------------------------------
c
