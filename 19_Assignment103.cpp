#include<iostream>
#include<cstring>
using namespace std;
class String{
    char*str;
    public:
    String(){
        str = NULL;
    }
    String(const char *s){
        str = new char[strlen(s)+1];
        strcpy(str,s);
    }
    void show(){
        cout<<endl<<str<<endl;
    }
    void operator +=(String);
};
void String :: operator +=(String s2){
    char *temp;
    int len = strlen(str)+strlen(s2.str) + 1;
    temp = new char[len];
    int i;
    for (i = 0; str[i]!='\0'; i++)
    {
       temp[i] = str[i]; 
    }
    for (int j = 0; s2.str[j]!='\0'; j++)
    {
       temp[i] = s2.str[j];
       i++; 
    }
    temp[i] = '\0';
    delete []str;
    str = temp;

}
int main()
   {
    String s1("xyz");
    String s2("abcdef");
    s1.show();
    s2.show();
    s1.operator+=(s2);
    s1.show();
    return 0;
}