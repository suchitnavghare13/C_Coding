#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    double seat_no;
    float pointer;
    char gender;
    static int seat_no_generator;

public:
    Student() : seat_no(0), gender(' '), pointer(0.0) {}

    void create_student_account(string name, char gender, float pointer)
    {
        this->name = name;
        this->gender = gender;
        this->pointer = pointer;
        seat_no = seat_no_generator++;
        cout << "\nhii " << name << " your account is succesfully created & seat number is " << seat_no;
    }

    int get_seat_no(){
        return seat_no;
    }

    void display(){
        cout<<"\nname "<<name;
        cout<<"\ngender "<< gender;
        cout<<"\npointer "<<pointer;
        cout<<"\nseat_no "<<seat_no;

    }



};

int Student::seat_no_generator = 1;

int main(){

    string name;
    int index,i,choice;
    Student student[10];
    char gender;
    float pointer;
    

    do{

        cout << "\n-----------------------------------------"
             << "\n----------- YCP College -----------------"
             << "\n-----------------------------------------"
             << "\n-----1. Create student account-----------"
             << "\n-----2. View student details-------------"
             << "\n-----3. Update student details -------------"
             << "\n-----0. Exit-----------------------------"
             << "\n-----------------------------------------"
             << "\nEnter your choice: ";
             cin>>choice;
        switch(choice){
            case 1:
            if(i>=10){
                cout<<"Array is full we will update next time: ";
                break;
            }
            cout<<"Enter the name ";
            cin.ignore();
            getline(cin,name);
            cout<<"Enter the genter(m/f/o) ";
            cin>>gender;
            cout<<"Enter the pointer (0-10) ";
            cin>>pointer;
            student[index].create_student_account(name,gender,pointer);
            index++;

            break;

            case 2:
            cout<<"Enter the seat number ";
            int seat_no;
            cin>>seat_no;
            for(i=0;i<index;i++){
                if(seat_no==student[i].get_seat_no()){
                    cout<<"Seat number found ";
                    student[i].display();
                }
            }
            if(i==index)
            cout<<"Enter seat number not found "<<seat_no;

            break;

            case 3:
            cout<<"Update name,gender,pointer service is not available for while please try after some time ";

            break;

            case 0:
            cout<<"thank you for visit";

            default:
            cout<<"Selected wrong option ";

            break;


        }
    }while(choice!=0);






    return 0;
}