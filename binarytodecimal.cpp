#include <iostream>
#include <cmath>
using namespace std ; 

int decimalToBinary(int num)
{
    int i = 0, decimalNo = 0;
    while( num > 0)
    {
        int bit = num%10;     //extracting the last bit
        decimalNo = decimalNo + (bit * pow(2, i++));    
        num = num / 10;      //changing the last bit
    }
    return decimalNo;
}

int main() {
    int num;
    cout << "Enter the binary number : ";
    cin >> num;
    cout << decimalToBinary(num) << endl;
    return 0;
}