#include<iostream>
using namespace std;

int main() {
    int size =50;
    int n;
    int arr[size];

    cout << "Enter number of Element to insert";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Elements:";
        cin >> arr[i];
    }
    
    int pos,element;

    cout << "Enter position";
    cin >> pos;
    cout << "Enter Element";
    cin >> element;

    for (auto i = size-1; i >= pos; i--) 
    {
        arr[i+1] = arr[i];   // shidt the element to the right side 
    }
    arr[pos] = element;     //palce the element at the correct position
    size++;                 //increse the size of the array

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    
    return 0;
}