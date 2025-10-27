/*vector<int>vec*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    //vector<int>vec;//0

    //vector<int>vec = {1,2,3}; //while compiling g++ -std=c++11 Vectors.cpp -o a

    //vector<int>vec(3,2); //(size of vector, default value at each index)
    
    //cout << "size =" << vec.size() << endl;

    vector<int>vec;
    cout << "size before push back =" << vec.size() << endl;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    cout << "size after push back =" << vec.size() << endl;
    cout << "capacity after push back =" << vec.capacity() << endl;

    vec.pop_back();//40

    cout << "size after pop =" << vec.size() << endl;

    cout << vec.at(2) << endl; //30

    for(int val: vec){ //val stores the "value" at each index
        cout << val << endl;
    }
    return 0;
}