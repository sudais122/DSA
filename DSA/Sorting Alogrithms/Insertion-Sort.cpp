#include<iostream>
using namespace std;

int main() {
    int n = 6;
    int arr[] = {8,3,5,2,9,1};

    for (int i = 0; i < n; i++)
    {
        int temp = arr[i]; //get the elemet of unsorted array
        int  j = i-1; // strat com from last of sorrted array
        while (j >= 0 && arr[j] > temp) //ist conditin check that we are inside teh array or not 
                                        // second see that  the curr element of arr is greter than key value
        {
            arr[j+1] = arr[j]; // shift the elemt to teh right side
            j--; //move left
        }
        arr[j+1] = temp; //place the key in coorect position
    }
    
    for (auto i = 0; i < n; i++)
    {
        cout << arr[i]<<",";
    }
    
    return 0;
}