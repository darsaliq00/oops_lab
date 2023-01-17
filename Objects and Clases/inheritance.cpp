#include <iostream>
using namespace std;
class Simple1{
    public:
      void Display(){
        cout<<"This is my 1st program."<<endl;
      }
};
class Simple2 : public Simple1{ /*inheritance syntax*/
    public:
      void Show(){
        cout<<"Hello Programmer";
      }
};
int main(void)
{
   Simple2 obj;
   obj.Display();
   obj.Show();
}
