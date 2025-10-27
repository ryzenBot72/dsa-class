#include <iostream>
#include <vector>
using namespace std;

//Kadane's Algorithm!

int main(){
    int currSum = 0;
    int maxSum = 0;
    vector<int> vec = {5,4,-1,7,8};

    for(int i = 0; i < vec.size(); i++){
        currSum += vec[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0)
            currSum = 0;
    }

    cout << "Sum of the Maximum Subarray is : " << maxSum << endl;

    return 0;
}