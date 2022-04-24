#include<iostream>
using namespace std;
struct student
{
    int roll;
    char name[40];
    float m1,m2,m3;
    float per;
    char grade;
};

void setData(struct student st[],int n);
void showData(struct student st[],int n);
void compGrade(struct student st[],int n);

int main()
   {
       struct student s1;
       int n;
       cout<<"Enter Total No Of Student : ";
       cin>>n;
       setData();
       showData();
    return 0;
}
void setData(struct student st[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Student Number "<<i+1<<"Roll Number : ";
        cin>>st[i].roll;
    }
    
}
void showData(struct student st[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<st[i].roll<<endl;
    }
}