#include<iostream>
using namespace std;


int main() {
    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int*p;

    // cout << &a[0][0]<<endl;
    // cout << &a;
    cout << a[0][0];
    return 0;
}