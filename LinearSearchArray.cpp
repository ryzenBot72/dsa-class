/*Tried out the simplest way to search an array to revise the basic working of an array.*/
#include <iostream>
using namespace std;

int linearSearch(int a[], int s, int t){
    for(int i = 0; i < s; i++){
        if(a[i] == t) //FOUND
            return i;
    }
    return -1; //NOTFOUND
}

int main(){
    int arr[] = {1, 6, 3, 9, 11, 99, 52, 8, 10}; //array to be searched for the element
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 8; //element to be searched
    int r = linearSearch(arr, size, target);
    if(r != -1)
        cout << "ELment " << target << " found at the index " << r << endl;
    else
        cout << "Element " << target << " not found" << endl;
    return 0;
}