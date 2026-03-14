#include<iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = 5;

    for (int i = 0; i < n-1; i++)
    {
        bool flag = 0;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag = 1;
            }     
        }
        if (flag == 0)
        {
            break;
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        cout <<arr[i] << endl;
    }
    
    return 0;
}