#include <iostream>
#include <vector>
using namespace std;

//brute force!

int main(){
    int currSum = 0;
    int maxSum = 0;
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    for(int st = 0; st < n; st++){
        currSum = 0;
        for(int end = st; end < n; end++){
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }
    }

    cout << "Sum of the Maximum Subarray is : " << maxSum << endl;

    return 0;
}