// Write a progran to implement function template.

#include <iostream>
using namespace std;

template <class P>
P maximum(P x, P y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    cout << "The maximum of 4 and 5 is: " << maximum(10,20) << endl;
    cout << "The maximum of 4.5 and 5.5 is: " << maximum(85.5,99.9) << endl;
    return 0;
}