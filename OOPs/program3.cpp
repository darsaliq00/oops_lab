#include <iostream>
using namespace std;
class Student{
public:
    string Name;
    string CollegeName;
    int RollNo;
    float CGP;
    Student(string name,int rollNo,float cgp){   //using constructor
        Name = name; 
        RollNo = rollNo;
        CGP = cgp;
    }
};
int main(void){
    Student s1("Afan",59,9.4);
    cout<<"Name = "<<s1.Name<<endl;
    cout<<"Roll No. = "<<s1.RollNo<<endl;
    cout<<"CGP = "<<s1.CGP<<endl;

    Student s2("David",23,9.2);

    s2.CGP = 9.0;

    cout<<"\nName = "<<s2.Name<<endl;
    cout<<"Roll No. = "<<s2.RollNo<<endl;
    cout<<"CGP = "<<s2.CGP<<endl;
}