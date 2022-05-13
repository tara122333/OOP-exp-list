// write a function template to serach an array for a specific value//
#include<iostream>
using namespace std;
template <class T>
int find(T *array,T value, int size )
{
    for (int i = 0; i < size; i++)
    {
        if(array[i]==value)
        return i;
        
    }
    return -1;  
}
int main(){
    int size = 10;
    int arr[10] = {1,2,3,4,5,6,6,78,12,13};
    int l = find(arr,2,size);
    cout<<l<<endl;
    return 0;
}