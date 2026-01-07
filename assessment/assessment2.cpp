#include <iostream>
#include <string>
using namespace std;

class Lecturer {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int lectureCount;

public:
    Lecturer() {
        lecturerName = "";
        subjectName = "";
        courseName = "";
        lectureCount = 0;
    }

    void assignInitialValues(string name, string subject, string course, int count) {
        lecturerName = name;
        subjectName = subject;
        courseName = course;
        lectureCount = count;
    }

    void addLecture(int count) {
        lectureCount += count;
    }

    void displayDetails() {
        cout << "Lecturer Name : " << lecturerName << endl;
        cout << "Subject Name  : " << subjectName << endl;
        cout << "Course Name   : " << courseName << endl;
        cout << "No. of Lectures : " << lectureCount << endl;
        cout << "------------------------------------" << endl;
    }
};

int main() {
    Lecturer lecturers[5];
    string name, subject, course;
    int count;

    cout << "===== Lecture Management System =====" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for Lecturer " << i + 1 << ":" << endl;
        cout << "Name: ";
        getline(cin, name);
        cout << "Subject: ";
        getline(cin, subject);
        cout << "Course: ";
        getline(cin, course);
        cout << "Number of Lectures: ";
        cin >> count;
        cin.ignore();

        lecturers[i].assignInitialValues(name, subject, course, count);
    }

    while (true) {
        char choice;
        cout << "\nDo you want to add lectures for any lecturer? (y/n): ";
        cin >> choice;
        cin.ignore();

        if (choice == 'y' || choice == 'Y') {
            int lecturerIndex, addCount;
            cout << "Enter lecturer number (1-5): ";
            cin >> lecturerIndex;
            cout << "Enter number of lectures to add: ";
            cin >> addCount;
            cin.ignore();

            if (lecturerIndex >= 1 && lecturerIndex <= 5) {
                lecturers[lecturerIndex - 1].addLecture(addCount);
                cout << "Lectures added successfully!" << endl;
            } else {
                cout << "Invalid lecturer number! Try again." << endl;
            }

        } else if (choice == 'n' || choice == 'N') {
            break;
        } else {
            cout << "Invalid choice! Please enter 'y' or 'n'." << endl;
        }
    }

    cout << "\n===== All Lecturer Details =====" << endl;
    for (int i = 0; i < 5; i++) {
        lecturers[i].displayDetails();
    }

    return 0;
}

