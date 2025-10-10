/*Explored the basics of Binary and Decimal Interconversion necessary for later DSA concepts and applied it in C++ code.*/
#include <iostream>
using namespace std;

int decToBin(int decNum){
    int binNum = 0;
    int pow = 1;
    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;
        binNum += (rem * pow);
        pow *= 10;
    }
    return binNum;
}

int binToDec(int binNum){
    int decNum = 0;
    int pow = 1;
    while(binNum > 0){
        int rem = binNum % 10;
        binNum /= 10;
        decNum += (rem * pow);
        pow *= 2;
    }
    return decNum;
}

int main(){
    int binary;
    int decimal;

    cout << "Enter a decimal number to convert to binary : ";
    cin >> decimal;
    int binNum = decToBin(decimal);
    cout << "Binary of " << decimal << " is :" << binNum << endl;

    cout << "Enter a binary number to convert to decimal : ";
    cin >> binary;
    int decNum = binToDec(binary);
    cout << "Decimal of " << binary << " is :" << decNum << endl;
    return 0;
}