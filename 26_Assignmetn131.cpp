
// write a program that reads and write characters to and from a disc

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
   {
    char ch;
    char str[] = "File Handling in c++ ";
    ofstream out("test.txt");
    for(int i =0; str[i] != '\0' ;i++){
        out.put(str[i]);
    }
    cout<<"file written";
    out.close();
    ifstream inf("test.txt");
    while(inf)
    {
        inf.get(ch);
        cout<<ch;
    }
    return 0;
}