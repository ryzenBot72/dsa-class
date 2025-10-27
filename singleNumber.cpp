#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int>vec = {4,1,2,1,2};
    int n = 0;
    for(int val: vec){
        n = n ^ val;
    }
    cout << n << endl;
    return 0;
}