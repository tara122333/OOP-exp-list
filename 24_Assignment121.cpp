// Eceptional Handling

// Objective :- Write a program to throw saparete exceptions for attempting push data on a full stack and attempting to pop data from an empty stack.
#include<iostream> 
#include<cstring>
using namespace std;
const int MAX = 3 ;

class Stack{
   int stk[MAX];
   int top;
   public:
        class full{
            
            public:
                char msg[50];
                full()
                {
                    msg[0]='\0';                
                }
                full(const char arr[])
                {strcpy(msg,arr);}
        };
        class empty{
        };
        Stack(){
            top = -1;
        }
        void push(int n){
            if(top>=MAX-1){
                throw full("Overflow...");
            }
            stk[++top] = n;
        }
        int pop(){
            if(top<0){
                throw empty();
            }
            return stk[top--];
        }

};
int main()
   {
    Stack s1;
    try{
        s1.push(11);
        s1.push(22);
        s1.push(33);
        // s1.push(44); // stack full
        cout<<s1.pop()<<endl;
        cout<<s1.pop()<<endl;
        cout<<s1.pop()<<endl;
        cout<<s1.pop()<<endl;
    }

    catch(Stack::full obj){
            cout<<"Stack is full "<<obj.msg<<endl;
    }

    catch(Stack::empty){
            cout<<"Stack is Empty"<<endl;
    }
    return 0;
}
