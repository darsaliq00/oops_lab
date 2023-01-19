//parameterised constructor 
#include <iostream>
using namespace std;
class Student{
public:
    string Name;
    int RollNo;
public:    
    Student(string name,int rollno){  /*parameterized constructor to initialize variables*/
        Name = name;
        RollNo = rollno;
    }
    void print(){
        cout<<"Name = "<<Name<<endl;
        cout<<"Roll Number = "<<RollNo;
    }    
};
int main(void)
{
    Student s1("Andrew",57);
    s1.print();
}
