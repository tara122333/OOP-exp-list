#include<iostream>
using namespace std;
void repchar();
void repchar(char );
void repchar(char,int);
int main()
   {
       char c;
       int x;
       cout<<"Enter a character : ";
       cin>>c;
        cout<<"Enter a number : ";
        cin>>x;
        repchar();
        repchar(c);
        repchar(c,x);
    
    return 0;
}
void repchar(){
    for (int i = 0; i < 10; i++)
    {
        cout<<"* ";
    }
    cout<<endl;
    
}
void repchar(char c ){
    for (int i = 0; i < 10; i++)
    {
        cout<<c<<" ";
    }
    cout<<endl;
}
void repchar(char c,int x){
    for (int i = 0; i < x; i++)
    {
        cout<<c<<" ";
    }
    cout<<endl;
}