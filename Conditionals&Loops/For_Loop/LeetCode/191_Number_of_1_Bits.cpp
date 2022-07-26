// This trick is also known as Hamming Weight(No of 1 bits or set bits)[Right Shift](191)
#include<iostream>
using namespace std;

int main(){

    uint32_t n;
    cin>>n;

    int count=0;

    while(n!=0){
        // Checking Last Bit
        if(n&1){
            count++;
        }
        n = n>>1;
    }

    cout << count << endl;

    return 0;
}