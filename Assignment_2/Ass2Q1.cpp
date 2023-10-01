/*Create a namespace NStudent. 
Create the Student class(created as per assignment-1 Q3) inside
namespace. Test the functionalities.*/
#include <iostream>
using namespace std;
namespace NStudent
{
    class Student
    {
        int roll_no;
        string name;
        int marks;

    public:
        void initStudent()
        {
            roll_no = 0;
            name = "";
            marks = 0;
        }

        void printStudentOnConsole()
        {
            cout << "Roll No" << roll_no << "Name" << name << "Marks" << marks;
        }

        void acceptStudentFromConsole()
        {
            cout << "Enter Roll no";
            cin >> roll_no;
            getchar();
            cout << "Enter the Name"<<endl;
            getline(cin, name);
            cout << "Marks";
            cin >> marks;
        }
    };
}

int main()
{
    NStudent::Student s1;
    s1.acceptStudentFromConsole();
    s1.printStudentOnConsole();

}