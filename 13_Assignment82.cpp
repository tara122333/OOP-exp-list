#include<iostream>
using namespace std;
class graphic{
      public:
        virtual void show()=0;
};
class circle: public graphic{
    public:
        void show(){
            
            cout<<"circle"<<endl;
        }
};
class triangluar: public graphic{
    public:
        void show(){
            cout<<"trianglular"<<endl;
        }
};
class rectangular: public graphic{
    public:
        void show(){
            cout<<"rectangular"<<endl;
        }
};
class square: public graphic{
    public:
        void show(){
            cout<<"square"<<endl;
        }
};


int main(){

    // graphic obj;
    circle c;
    triangluar t;
    square s;
    rectangular r;
    graphic *ptr[]{&c, &t, &s, &r,};
    for(int i=0;i<5;i++){
        ptr[i]->show();
    }
    return 0;
}