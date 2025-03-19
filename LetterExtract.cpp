#include <iostream>
#include <string>

using namespace std;

int main(){
    string codes[] = { 
        "B123",
        "C234",
        "A345",
        "C15",
        "B177",
        "G3003",
        "C235",
        "B179"
     };
     int size = sizeof(codes)/sizeof(codes[0]);  // getting the size of an array
     for(int i =0;i<=size;i++){
      if(codes[i][0]=='C'){
        cout <<codes[i] <<endl; //output strings that starts with letter 'C'
      }
     }
     return 0; //terminating the program
}