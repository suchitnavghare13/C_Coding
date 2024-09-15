#include <iostream>
#include <string>
using namespace std;

class Student 
{
private:
    string name;
    double seat_no;
    char gender;
    float pointer;
    static int Seat_no_generator;

public:
    Student() : seat_no(0), gender(' '), pointer(0.0) {}

    void create_student_account(const string name, char gender, float pointer) 
	{
        this->name = name;
        this->gender = gender;
        this->pointer = pointer;
        this->seat_no = Seat_no_generator++;
        cout << "\nWelcome " << name << ", Your account is created successfully"
             << "\nYour seat number is: " << seat_no << endl;
    }

    double get_seat_no() const 
	{
        return seat_no;
    }

    void display_student_details() const 
	{
        cout << "\nName: " << name
             << "\nGender: " << gender
             << "\nPointer: " << pointer
             << "\nSeat Number: " << seat_no << endl;
    }
};

int Student::Seat_no_generator = 1;

int main() 
{
    Student students[10];
    int choice, index = 0;
    string name;
    char gender;
    float pointer;
    double seat_no;
    int i;

    do {
        cout << "\n-----------------------------------------"
             << "\n----------- YCP College -----------------"
             << "\n-----------------------------------------"
             << "\n-----1. Create student account-----------"
             << "\n-----2. View student details-------------"
             << "\n-----0. Exit-----------------------------"
             << "\n-----------------------------------------"
             << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) 
		{
            case 1:
                if (index >= 10) 
				{
                    cout << "Student array is full!" << endl;
                    break;
                }
                cout << "\nEnter your name: ";
                cin.ignore(); 
                getline(cin, name);
                cout << "Enter your gender (m/f/o): ";
                cin >> gender;
                cout << "Enter your previous year pointer: ";
                cin >> pointer;
                students[index].create_student_account(name, gender, pointer);
                index++;
                break;

            case 2:
                cout << "\nEnter student seat number: ";
                cin >> seat_no;
                for (int i = 0; i < index; i++) {
                    if (students[i].get_seat_no() == seat_no)
					 {
                        cout << "\nAccount Found:";
                        students[i].display_student_details();
                        break;
                    }
                    
                }
                if (i == index-1) { 
                        cout << "\nAccount number " << seat_no << " not found." << endl;
                    }
                break;

            case 0:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}