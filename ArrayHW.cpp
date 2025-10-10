#include <iostream>
#include <climits>
using namespace std;

int calcSum(int a[], int s){
    int sum = 0;
    for(int i = 0; i < s; i++){
        sum += a[i];
    }
    return sum;
}

int calcProd(int a[], int s){
    int prod = 1;
    for(int i = 0; i < s; i++){
        prod *= a[i];
    }
    return prod;
}

void swapMinMax(int a[], int s){
    int min = INT_MAX;
    int max = INT_MIN;
    int mxIndex = 0;
    int mnIndex = 0;
    for(int i = 0; i < s; i++){
        if(a[i] < min){
            min = a[i];
            mnIndex = i;
        }
        if(a[i] > max){
            max = a[i];
            mxIndex = i;
        }
    }
    int temp = a[mnIndex];
    a[mnIndex] = a[mxIndex];
    a[mxIndex] = temp;
    cout << "The new array after swapping min and max is : " << endl;
    for(int i = 0; i < s; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void printUnique(int a[], int s){
    cout << "The unique elements in the array are : " << endl;
    int found = 0;
    for(int i = 0; i < s; i++){
        found = 0;
        for(int j = 0; j < s; j++){
            if(a[i] == a[j])
                found++;
        }
        if(found < 2)
            cout << a[i] << " ";
    }
}

int main(){
    int arr[] = {1, 4, 6, 3, 4, 2, 19, 3};
    int size = sizeof(arr)/sizeof(arr[0]);

    int arr1[] = {5, 2, 6, 9, 3, 3, 1, 5};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);

    int sum = calcSum(arr, size); //Function to calculate Sum of all elements of the array
    cout << "The sum of all the elements is : " << sum << endl;
    int prod = calcProd(arr, size); //Function to calculate Product of all elements of the array
    cout << "The product of all the elements is : " << prod << endl;

    swapMinMax(arr, size); //Function to swap the max and min of the array

    printUnique(arr, size); //Function to print only the unique values of the array
    return 0;
}