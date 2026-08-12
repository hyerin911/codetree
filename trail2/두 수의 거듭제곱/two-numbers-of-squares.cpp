#include <iostream>
using namespace std;

void multiply(int a, int b){
    int result=1;
    int i=1;
    while(i<=b){
        result*=a;
        i++;
    }

    cout<<result;
}

int main() {
    // Please write your code here.
    int a, b;
    cin>>a>>b;
    
    multiply(a, b);
    
    return 0;
}