#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(int argc, char *argv[])// counter and vector 
   {
       if(argc!=3){
           cout<<"Error : arg are not properly\n";
           cout<<"file-copy src dest";
           return 0;
       }
       ifstream src(argv[1]);
           if(!src){
               cout<<"Source file is not Exist";
               return 0;
           }
       ifstream tmp(argv[2]);
       if(tmp){
           cout<<"Dest.file already exist";
           return 0;
       }    
       ofstream dest(argv[2]);
       if(!dest){
           cout<<"Error in dest file opening";
           return 1;
       }
       char ch;
       while(!src.eof()){
           src.get(ch);
           dest.put(ch);
       }
       cout<<"File Successfully copied ...";
       src.close();
       dest.close();
    return 0;
}