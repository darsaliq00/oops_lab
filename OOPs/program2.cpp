#include <iostream>
using namespace std;

class part {
  private:
      int modelnumber;
      int partnumber;
      float cost;
  public:
      void setpart(int m, int p, float c){
      modelnumber = m;
      partnumber = p;
      cost = c;
      }
      void showpart(){
      cout << "Model : "<<modelnumber<<endl;
      cout << "Part : "<<partnumber<<endl;
      cout << "Cost : "<<cost;
       }
};

int main(void){
    part part1;                         //define object
    part1.setpart(3241,252,54.78);  //format (model,part,cost)
    part1.showpart();                   //call member function

}