/*Tried out reversing an array to revise the basic working of an array..*/
#include <iostream>
using namespace std;

void printArr(int a[], int s){
    for(int i = 0; i < s; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void reverseArr(int a[], int s){
    for(int i = 0; i < s/2; i++){
        int temp = a[i];
        a[i] = a[s-i-1];
        a[s-i-1] = temp;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 4, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArr(arr, size);
    printArr(arr, size);
    return 0;
}