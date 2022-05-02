// Write a class whose member function access is data member using this pointer 
// Write a main function to excersise this class.
// using this pointer for returing value;
// A more precticale use of this is reaturing value from member function and overloadded operators 

#include<iostream>
using namespace std;
class Test{
    private:
       int data;
    public:
        void tester(){
            this -> data = 121;
            cout<<this->data<<endl;
        }
};
int main()
   {
    Test t;
    t.tester();
    return 0;
}