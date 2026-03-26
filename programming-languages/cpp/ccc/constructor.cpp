#include<iostream>
using namespace std;
class Student
{
    public:
    int roll_no=101;
    string name= "vishal vitthal mahajan";
    string addres= "Somatne phata,Talegoan,pune-410 506";
    float marks = 91;

    Student(){
        cout << "Student  roll_no:-" <<roll_no<< endl<< endl;
        cout << "Student  name:-" <<name << endl<< endl;
        cout << "Student  Addres:-" << addres << endl<< endl;
        cout << "Student  marks:-" << marks<<"%" ;

    }
     

};
int main(){
    Student s;
   /* s.roll_no=61204;
    s.name = "vishal vitthal mahajan";
    s.addres = "Somatne phata,Talegoan,pune-410 506";
    s.marks = 91;*/
    /*cout << "Student  roll_no:-" << s.roll_no << endl<< endl;
    cout << "Student  name:-" << s.name << endl<< endl;
    cout << "Student  Addres:-" << s.addres << endl<< endl;
    cout << "Student  marks:-" << s.marks<<"%" ;*/

    return 0;
}
