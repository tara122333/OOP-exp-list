#include<iostream>
#include<cstring>
using namespace std;
class String{
    char str[100];
    public:
    String(){
        str[0] = '\0';
    }
    String(const char s[100]){
        strcpy(str,s);
    }
    void show(){
        cout<<endl<<str<<endl;
    }
    String operator +(String);
};

String String :: operator +(String s2){
    String temp;
    int i,j;
    for (i = 0; str[i]!='\0'; i++)
    {
       temp.str[i] = str[i];
    }
    for (j = 0; s2.str[j]!='\0'; j++)
    {
       temp.str[i++] = s2.str[j];
    }
    temp.str[i] = '\0';
    return temp;

}
int main()
   {
    String s1("xyz");
    String s2("abc");
    String s3;
    s3 = s1+s2;
    s1.show();
    s2.show();
    s3.show();
    return 0;
}