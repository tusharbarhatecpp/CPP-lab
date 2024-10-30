//This C++ program writes text to a file named cpp.txt 
#include <fstream> //Opens the file in both read and write mode.
#include <iostream>
using namespace std;

int main() {
    
    ofstream outFile("cpp.txt");
     if (outFile.is_open()) {
         outFile<<"Hello, World!\n";
         outFile<<"This is a text file in C++\n";
         outFile.close();
         cout<<"Data written to file successfilly."<<endl;
     }
     else
     {
         cout<<"Error: Could not open the file."<<endl;
     }
         
    

    return 0;
}
