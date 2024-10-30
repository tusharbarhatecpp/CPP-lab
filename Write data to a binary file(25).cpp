//This is a C++ program that writes a structure's data to a binary file named data.bin
#include<iostream>
#include<fstream> //Opens the file in both read and write mode.

using namespace std;

struct Data {
int id;
char name[50];
};

int main()
{
Data d1 = {1, "Tushar"};

ofstream outFile ("data.bin", ios::binary);

if (outFile.is_open())
{
outFile.write(reinterpret_cast<char*>(&d1), sizeof(d1));

// Write binary data 
outFile.close();
cout<< "Data written to binary file." <<endl;
}else
{
cout<<"Error:Could not open file."<<endl;
}
return 0;
}