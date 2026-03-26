#include<iostream>
using namespace std;
class Employee
{
    public:
        int id;
        string name;
        string addres;
        string salary;


};
int main(){
    Employee e;
    e.id=101;
    e.name = "vishal";
    e.addres = "Somatne phata,Talegoan,pune-410 506";
    e.salary = "1cr";
    cout << "Employee  no:-\t" << e.id << endl;
    cout << "Employee  name:-" << e.name << endl;
    cout << "Employee  Addres:-" << e.addres << endl;
    cout << "Employee  Salary:-" << e.salary << endl;

    return 0;
}
