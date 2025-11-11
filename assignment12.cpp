#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout,fout1;
    string line;
    ifstream in,in1;
    fout.open("sample.txt",ios::out);
    fout<<"Welcome to the file handling"<<endl;
    fout<<"This is file handling in c++"<<endl;
    fout.close();
    in.open("sample.txt",ios::in);
    while(getline(in,line))
    {
        cout<<line<<endl;
    }
    in.close();
    fout1.open("sample.txt",ios::app);
    fout1<<"Welcome to the file handling 1"<<endl;
    fout1<<"This is file handling in c++ 1"<<endl;
    fout1.close();
    in1.open("sample.txt",ios::in);
    while(getline(in1,line))
    {
        cout<<line<<endl;
    }
    in1.close();

}