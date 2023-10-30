
#include <iostream>
#include <string>
using namespace std;
struct Student
{
    string name;
    Student(){}
    Student(string name){
        this -> name = name;
    }

    void print()
    {
        cout << "Name: " << name;
    }
};
int main()
{       int n;
        string a;
        cout << "So sinh vien = ";
        cin >> n;
        Student students[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            students[i] = Student(a);
        }

    for(int i=0; i<3; i++)
    {
        students[i].print();
        cout << "\n";
    }
    return 0;
}
