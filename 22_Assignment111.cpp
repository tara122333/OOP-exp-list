#include <iostream>

using namespace std;

template <class T>
T abs (T n)
{
    return (n < 0) ? -n : n;
}
int main()
{
    int a = 5;
    int b = -6;
    long int k = 70000L;
    long int l = -800000L;
    double d1 = 9.95;
    double d2 = 3.14;
    cout << abs (a) << "\n";
    cout << abs (b) << "\n";
    cout << abs (k) << "\n";
    cout << abs (l) << "\n";
    cout << abs (d1) << "\n";
    cout << abs (d2) << "\n";
    return 0;
}