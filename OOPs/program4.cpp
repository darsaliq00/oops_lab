//making this as more easy to understand 
#include <iostream>
using namespace std;
class Student{
public:
    string CollegeName;
    string StudentName;
    int RollNo;
    float CGP;

    Student(string collegename,string studentname,int rollno,float cgp){  
        CollegeName = collegename;
        StudentName = studentname;
        RollNo = rollno;
        CGP = cgp;
    }

    void GetInfo(){
        cout<<"Enter the college name : "<<CollegeName<<endl;
        cout<<"Enter the student name : "<<StudentName<<endl;
        cout<<"Enter the roll no.  : "<<RollNo<<endl;
        cout<<"Enter the cgp score : "<<CGP<<endl;
    }
};
int main(void)
{
    Student s1("IUST","Afan",59,9.6);
    s1.GetInfo();
    cout<<endl;
    Student s2("KU","Andrew",78,9.1);
    s2.GetInfo();
    
}