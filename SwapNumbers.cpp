#include <iostream>
using namespace std;

int swapNumbers(int &varA,int &varB){
       int temp = varA;
       varA =varB;
       varB=temp;
      
}

int main(){
    int varA=25;
    int varB=100;
     cout << " VarA before swap : " << varA << endl;//25
     cout << " VarB before swap :" << varB << endl;//100

     swapNumbers(varA,varB);
     cout << " varA after swap : " << varA << endl;//100
       cout << " varB after swap : " << varB << endl;//25

}