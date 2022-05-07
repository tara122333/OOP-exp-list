#include<iostream>
using namespace std;
class staticDemo{
    int count; // object scope
    static int srno; // class scope
    public:
        staticDemo(){
            srno++;
            count = srno;
        }
        int serial_no(){
            return count;
        }

};
int staticDemo :: srno= 0; // initialization or static data member 
int main()
   {
    staticDemo s1,s2,s3;
    cout<<s1.serial_no()<<endl;
    cout<<s2.serial_no()<<endl;
    cout<<s3.serial_no()<<endl;
    return 0;
}