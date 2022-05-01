#include<iostream>
using namespace std;
class Complex{
    private:
        float real,imaginary;
    public:
        void getData(float a,float b);
        friend Complex addComplexNumber(Complex,Complex);
        void display();
};
int main()
   {
    Complex c1,c2,c3;
    c1.getData(4.1,3.2);
    c2.getData(2.2,3.1);
    c1.display();
    c2.display();
    c3 = addComplexNumber(c1,c2);
    c3.display();
    return 0;
}
void Complex :: display(){
    cout<<"The Complex Number is : "<<real<<"+"<<imaginary<<"i"<<endl;
}
void Complex :: getData(float a, float b){
    real = a;
    imaginary = b;
}
Complex addComplexNumber(Complex o1, Complex o2){
    Complex c3;
    c3.real = o1.real + o2.real;
    c3.imaginary = o1.imaginary + o2.imaginary;
    return c3;
}