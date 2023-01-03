#include <iostream>
using namespace std;
class Student{
    public:
    string Name;
    int RollNo;
};
int main(void){
    Student s1,s2;
    cout<<"Enter the Student 1 Name : ";
    cin>>s1.Name;
    cout<<"Enter the Student 1 Roll No : ";
    cin>>s1.RollNo;

    cout<<"Enter the Student 2 Name : ";
    cin>>s2.Name;
    cout<<"Enter the Student 2 Roll No : ";
    cin>>s2.RollNo;
    
    cout<<"\nStudent 1 details : "<<endl;
    cout<<"Name : "<<s1.Name<<endl;
    cout<<"Roll No. : "<<s1.RollNo<<endl;
    
    cout<<"\nStudent 2 details : "<<endl;
    cout<<"Name : "<<s2.Name<<endl;
    cout<<"Roll No. : "<<s2.RollNo;
}