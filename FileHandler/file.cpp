#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream infile; 
    string read;
    
    infile.open("output.txt");  
    
    if (infile.is_open()) {  
        getline(infile, read);  
        cout << read << endl;
        infile.close();
    }
    else {
        cout << "Can't open file" << endl;
    }
    
    return 0;
}


