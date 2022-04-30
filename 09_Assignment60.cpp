#include<iostream>
#include<cstring>
using namespace std;
class string1{
    char *str;
    public:
        string1(){
            str = NULL;
        }
        string1(const char *s){
            int len = strlen(s)+1;
            str = new char[len];
            strcpy(str,s);
        }
        void show(){
            if(str!= NULL){
                cout<<str<<endl;
            }
  
        }
};
int main(){
    string1 s1;
    string1 s2("C++ Programming Lanuage");
    string1 s3("Dynamic Objects");
    s1.show();
    s2.show();
    s3.show();
    return 0;
}