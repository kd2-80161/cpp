// Write a menu driven program for Student in CPP language. 
// Create a class student with data
// members roll no, name and marks. 
// Implement the following functions
// void initStudent();
// void printStudentOnConsole();
// void acceptStudentFromConsole();
#include<iostream>
using namespace std;
class Student{
int roll_no;
string name;
int marks;

public:
void initStudent(){
roll_no=0;
name="";
marks=0;
}

 void printStudentOnConsole()
{
    cout<<"Roll No"<<roll_no<<"Name"<<name<<"Marks"<<marks;
}

 void acceptStudentFromConsole(){
    cout<<"Enter Roll no";
    cin>>roll_no;
    getchar();
    cout<<"Enter the Name";
    getline(cin,name);
    cout<<"Marks";
    cin>>marks;
 }
};

int main(){
    Student st;
    int choice;

    do{
        cout << "\nMenu:\n";
        cout << "1. Initialize Student\n";
        cout << "2. Print Student\n";
        cout << "3. Accept Student\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: \n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            st.initStudent();
            break;
        case 2:
            st.printStudentOnConsole();
        break;
        case 3:
            st.acceptStudentFromConsole();
            break;
        case 4:
            cout<<"Exiting"<<endl;
        default:
            break;
        }

    }while(choice!=4);
    return 0;
}