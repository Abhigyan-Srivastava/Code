#include<iostream>
using namespace std;

int main(){

    int a=4;
    int b=6;

    // AND Operation
    cout << (a&b) << endl;

    // OR Operation
    cout << (a|b) << endl;

    // NOT Operation
    cout << ~a << endl;

    // XOR Operation
    cout << (a^b) << endl;

    // Left Shift (5 << 1) [5 ko left shift krna hai 1 baar!] [small numbers ke liye 2 se number multiply hota hai] [whereas for big numbers it can be changed to a negative number]

    cout << (19<<1) << endl;
    cout << (21<<2) << endl;

    // Right Shift (15 >> 1) [Dividing by the same number i.e 2 in this case]
    
    cout << (17>>1) << endl;
    cout << (17>>2) << endl;

    return 0;
}