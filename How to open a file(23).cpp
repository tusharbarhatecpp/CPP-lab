//This C++ program demonstrates how to open a file
#include <fstream> //Opens the file in both read and write mode..
#include <iostream>
using namespace std;

int main() {
    
    ifstream inputFile("tushar.txt");
    ofstream outputFile("tushar.txt");
    fstream file("tushar.txt", ios::in | ios::out);


    return 0;
}
