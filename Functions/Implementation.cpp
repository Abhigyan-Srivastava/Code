#include<iostream>
using namespace std;

// Function Defenition
int power(int x , int y , int ans=1){
    for(int i=1;i<=y;i++){
        ans = ans * x;
    }
    return ans;
}

int main(){
    
    int a,b;
    cin >> a >> b;

    // Function Call
    int answer = power(a,b);

    cout << "Answer-> " << answer << endl;

    return 0;
}