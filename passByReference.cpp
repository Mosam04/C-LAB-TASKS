#include <iostream>
using namespace std;


void my_func(int &x){
    x =20;
    cout <<" The value of x from my function :"<< x <<endl;
};
int main(){
  int x =60;

  my_func(x);
  cout <<" The value of x from main function :"<<x<<endl; 
  
}