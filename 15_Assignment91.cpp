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
        void showData(){
            if(inches >= 12){
                cout<<"Wrong input ||";
            }
            cout<<"Value is : "<<feet<<"\'"<<inches<<"\""<<endl;
        }
        Distance add_Dis(const Distance& ) const;
};
Distance Distance:: add_Dis(const Distance &d2) const{
        Distance d3;
        d3.feet = feet + d2.feet;
        d3.inches = inches + d2.inches;
        if (d3.inches >= 12)
        {
           d3.inches -= 12;
           d3.feet += 1;
        }
        // feet=0;
        return d3;
         
}
int main()
   {
    Distance d1(9,11),d2(7,10),d3;
    d1.showData();
    d2.showData();
    cout<<endl;
    cout<<"Sum of two values ==> ";
    d3=d1.add_Dis(d2);
    d3.showData();
    return 0;
}