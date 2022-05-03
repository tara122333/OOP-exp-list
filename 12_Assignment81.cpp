#include<iostream>
using namespace std;
struct student
{
    char name[20];
    int m1,m2, tot;
};
void getdata(student st[], int n);//prototype
void showdata(student st[], int n);

int main()
{
    student st[10];//array of struc
    int n;
    cout<<"Enter no of terms: ";
    cin>>n;//overloaded extraction operator function
    getdata(st,n);
    showdata(st,n);
}
void getdata(student st[], int n)//  func definition
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name, m1 & m2 of student "<<i+1;
        cin>>st[i].name>>st[i].m1>>st[i].m2;
        st[i].tot=st[i].m1+st[i].m2;// processing
    }
}
void showdata(student st[], int n)
{
    cout<<"Name \t m1 \t m2 Total Marks\n";
    for(int i=0;i<n;i++)
    {
        cout<<st[i].name<<"\t"<<st[i].m1<<"\t"<<st[i].m2<<"\t"<<st[i].tot;
        cout<<"\n";
    }
}