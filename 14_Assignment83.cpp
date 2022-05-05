#include<iostream>
using namespace std;
class base{
    public:
        virtual void show(){
            cout<<"base class"<<endl;
        }
};
class derive1 : public base{
    public:
        void show(){
            cout<<"derive class1"<<endl;
        }
};
class derive2 : public base{
    public:
        void show(){
            cout<<"derive class2"<<endl;
        }
};

int main(){

    base *ptr[2];
    derive1 d1;
    derive2 d2;
    ptr[0] = &d1;
    ptr[1] = &d2;
    ptr[0]->show();
    ptr[1]->show();
    return 0;
}