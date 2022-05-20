//Experiment 13.4
// create a class person that has name and age as data members. include member functions //diskOut() and diskIn()
//to the person class that allow a person object to write itself to disk and read itself back in respectively.
//Assume that new objects of the class are always appended to the end of the file. An argument to the diskIn() function should  allow to
//read the data for any person in the file. To prevent an attempt to read data beyond the end of the file, you have to include
//a static member function, diskCount(), that returns the number of persons stored in the file.
//Write a main () program that exercises this person class.


#include<fstream>
#include<iostream>
using namespace std;
class person
{
    char name[40];
    int age;
public:
    void getdata()
    {
        cout<<"\nEnter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
    }
    void showdata()
    {
        cout<<"\n Name "<<name;
        cout<<"\n Age "<<age;
    }
    void diskIn(int);
    void diskOut();
    void modify(int);
    static int diskCount();
};
void person::diskIn(int n)
{
    ifstream inf;
    inf.open("person.dat",ios::binary);
    inf.seekg(n*sizeof(person));
    inf.read((char*)this,sizeof(*this));
}
void person::diskOut()
{
    ofstream outf("person.dat",ios::app|ios::binary);
    outf.write((char*)this,sizeof(*this));
}
int person::diskCount()
{
    ifstream inf("person.dat",ios::binary);
    inf.seekg(0,ios::end);
    int y=inf.tellg()/sizeof(person);
    return y;
}
void person::modify(int r)
{
    ofstream outf("person.dat",ios::in|ios::out|ios::binary);
    outf.seekp((r-1)*sizeof(person),ios::beg);
    outf.write((char*)this,sizeof(*this));
}
int main()
{
    person p;
    int ch;
    int r,n;
    cout<<"\n1. Add Records";
    cout<<"\n2. Show Records";
    cout<<"\n3. Modify a record";
    cout<<"\nInput your choice ";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"Enter data for person \n";
            p.getdata();
            p.diskOut();
            break;
        case 2:
            n=person::diskCount();
            cout<<"\nThere are "<<n<<" persons in the file...";
            for (int i=0;i<n;i++)
            {
                cout<<"\nPerson "<<i+1;
                p.diskIn(i);
                p.showdata();
            }
            break;
        case 3:
            cout<<"\n Enter record no. to be modified ";
            cin>>r;
            cout<<"\nEnter new data for person ";
            p.getdata();
            p.modify(r);
    }

    return 0;
}
