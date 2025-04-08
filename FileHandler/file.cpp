#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // for tolower
#include <sstream>// getting the stream ,like how cin works

using namespace std;
//method for reversing
string reverse(string stmt){
      string reversed="";
      for(int i = stmt.length()-1;i>=0;i--){
          reversed +=stmt[i];
      }
      return reversed;
}
int main() {
    ifstream infile; 
    string fileData;
    int vowelCount=0;
    int wordCount=0;
    
    infile.open("output.txt");  
    
    if (infile.is_open()) {  
        getline(infile, fileData);  
        cout << fileData << endl;
        for(char ch:fileData){
         ch=tolower(ch);
         if(ch == 'a' ||  ch == 'e' || ch == 'i' || ch == 'o' || ch =='u'){
            vowelCount++;
         }
        }
        cout << " Number of vowels in  the text is :" << vowelCount << '\n';
        //count words using stringstream
        stringstream ss(fileData);
        string word;
        while(ss>>word){
         wordCount++;
        }
        cout << " number of words :" << wordCount <<endl;

         //reversed statement
         cout <<" Reversed statement : " << reverse(fileData) << endl;
    }
    
    else {
        cout << "Can't open file" << endl;
    }
    
    return 0;
}





