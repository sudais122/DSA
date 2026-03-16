#include <iostream>
using namespace std;

int main()
{
    int a[] = {6, 2, 1, 5, 3};

    int *q;
    q = a;
    cout << q << endl; // the name of the array always store the base adress
    // of the array so this print the abse acress of the array
    cout << &a[1]<<endl; // it ptints the adress of the a
    q++;           // now the pointer increse and it points to the second value of the integer
    cout << q<<endl;     // now q print the adress of second element in the array
    cout << (q+1) <<endl; //it print the adress of second value
    cout << *(1+q) << endl; //now it print the value of teh second element
    cout << 2[a] << endl;
    cout << a+1 <<endl;
    cout << &a+1 << endl;
    cout << *(a+1) <<endl;
    cout << *a +1 <<endl; // it print the 7 the ist *a points to ist elemtn and then add 1 so
        //6+1 is 7
    return 0;
}