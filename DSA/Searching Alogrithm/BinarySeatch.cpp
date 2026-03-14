#include<iostream>
using namespace std;

int main() {
    int n= 7;
    int arr[] = {1,3,5,7,9,11,13};
    int key;
    cout << "Enter element to search";
    cin >> key;

    int left = 0;
    int right =  n-1; // define the range, if teh array is 7length then 7-1 is 6 so right is 7 now the left is 0 and right is 6

    while (left <= right)
    {
        int mid = (left+right)/2; // find the middle of teh array
        if (key == arr[mid])
        {
            cout << "Array found at index" << mid <<endl; // if the mid element is match then print that element
            return 0;
        }else if (key > arr[mid]) //if the key is greater that the midd then search right side and uoate the mid
        {
            left = mid +1; 
        }else{
            right = mid -1; // if the key is less that the mid then search left side 
        }
    }
    
    cout << "Elemnt not found";
}