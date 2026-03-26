#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string mystring;
    //write file
    ofstream Myfile("text.txt");
    //read file
    Myfile << "Heloo jii";
    ifstream file("text.txt");
    while (getline(file,mystring))
    {
        cout << mystring;
    }
    

    
    Myfile.close();
    file.close();

    return 0;
}