#include<iostream>
using namespace std;
class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance(){
            feet = 0;
            inches = 0.0;
        }
        Distance(int ft, float in){
            feet = ft;
            inches = in;
        }
        void getData(){
            cout<<"Enter A Value In feet :";
            cin>>feet;
            cout<<"Enter A value In inches:";
            cin>>inches;
            cout<<endl;

        }
        void showData(){
            if(inches >= 12){
                cout<<"Wrong input ||";
            }
            cout<<"Value is : "<<feet<<"\'"<<inches<<"\""<<endl;
        }
        void add_dis(Distance,Distance);
        Distance add_Dis(Distance);
};
void Distance :: add_dis(Distance d1, Distance d2){
    feet = d1.feet + d2.feet;
    inches = d1.inches + d2.inches;
    if (inches >= 12)
    {
       inches -= 12;
       feet += 1;
    };
    
}
Distance Distance:: add_Dis(Distance d2){
        Distance d3;
        d3.feet = feet + d2.feet;
        d3.inches = inches + d2.inches;
        if (d3.inches >= 12)
        {
           d3.inches -= 12;
           d3.feet += 1;
        }
        return d3;
         
}
int main()
   {
    Distance d1,d2,d3;
    d1.getData();
    d2.getData();
    d3.add_dis(d1,d2);
    d1.showData();
    d2.showData();
    cout<<endl;
    cout<<"Sum of two values ==> ";
    d3.showData();
    return 0;
}