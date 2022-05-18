// Write a program that Writes Formated output to a File using insertion operation 
// The program should also read the data using the extraction operator 


#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
   {
    char ch ='x';
    int j = 95;
    double d = 3.14;
    char str1[] = "c++ program";
    char str2[] = "pce";
    ofstream outf("tara.txt");
    outf<<ch<<endl;
    outf<<j<<endl;
    outf<<d<<endl;
    outf<<str1<<endl;
    outf<<str2<<endl;
    cout<<"\nFile Written\n";
    return 0;
}
int main(){
    char ch;
    double d;
    int j;
    char str1[50],str2[50];
    ifstream inf("tara.txt");
    inf>>ch>>j>>d>>str1>>str2;
    cout<<ch<<endl;
    cout<<j<<endl;
    cout<<d<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;
    return 0;
}