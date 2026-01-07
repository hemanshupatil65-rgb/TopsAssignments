#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void setData(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Person {
public:
    int rollNo;

    void setStudent(int r) {
        rollNo = r;
    }

    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

class Teacher : public Person {
public:
    string subject;

    void setTeacher(string s) {
        subject = s;
    }

    void displayTeacher() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    s.setData("Rahul", 20);
    s.setStudent(101);
    s.displayStudent();

    cout << endl;

    t.setData("Anita", 35);
    t.setTeacher("Math");
    t.displayTeacher();

    return 0;
}

