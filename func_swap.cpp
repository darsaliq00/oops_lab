/*Passing value by reference*/
#include <iostream>
using namespace std;
void order(int *numb1,int *numb2){
    if(numb1>numb2){
        int temp=*numb1;
        *numb1=*numb2;
        *numb2=temp;
    }
}    
int main(){
    int n1=12,n2=13;
    int n3=14,n4=17;
    order(&n1,&n2);
    order(&n3,&n4);
    cout<<"n1 = "<<n1<<endl;
    cout<<"n2 = "<<n2<<endl;
    cout<<"n3 = "<<n3<<endl;
    cout<<"n4 = "<<n4<<endl;
    return 0;
}
