#include<iostream>
using namespace std;

int main(){
    int arr[6] = {5, 8, 2, 9, 1, 7};
    bool found = false;
    int key;
    cout << "Enter elemrnt to find";cin>> key;

    for (int i = 0; i < 6; i++)
    {
         if(key == arr[i]){
            cout << "Elemt found at index" << i << "is" <<arr[i]<<endl;
            return 0;
            break;
         }
    }
      cout << "Elemtn not found"<<endl;

}