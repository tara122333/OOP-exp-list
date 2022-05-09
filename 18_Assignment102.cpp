#include<iostream>
using namespace std;
class Counter{
    int count;
    public:
        Counter(){
            count = 0;
        }
        Counter(int a){
            count = a;
        }
        Counter operator++(){
            count++;
            return Counter(count);
        }
        Counter operator++(int){
            return Counter(count++);
        }
        int get(){
            return count;
        }
};
int main()
   {
    Counter c1(5),c2(6);
    Counter c3;
    c1++;
    c3 = c2++;
    cout<<c1.get()<<endl;
    cout<<c2.get()<<endl;
    cout<<c3.get()<<endl;
    return 0;
}