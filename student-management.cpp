#include <iostream>
using namespace std;
class Student {
public:
    int rollNumber;
    string name;
    float marks;

    void inputStudentDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayStudentDetails() {
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;
    }
};

int main() {

    Student students[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1) {
            cout << "\nEnter Student Details\n";
            students[count].inputStudentDetails();
            count++;
        }

        else if(choice == 2) {
            cout << "\nStudent Records:\n";
            for(int i = 0; i < count; i++) {
                cout << "\nStudent " << i + 1 << endl;
                students[i].displayStudentDetails();
            }
        }

        else if(choice == 3) {
            int roll;
            cout << "Enter roll number to search: ";
            cin >> roll;

            bool found = false;

            for(int i = 0; i < count; i++) {
                if(students[i].rollNumber == roll) {
                    cout << "\nStudent Found\n";
                    students[i].displayStudentDetails();
                    found = true;
                }
            }

            if(!found) {
                cout << "Student not found\n";
            }
        }

    } while(choice != 4);
    return 0;
}