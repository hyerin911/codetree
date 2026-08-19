#include <iostream>
using namespace std;


int main() {
    // Please write your code here.
    int n, k=0;
    int binary[100];
    int num=0;

    cin>>n;

    while(true){
        if(n<1){
            break;
        }
        binary[k++]=n%10;
        n/=10;
    }

    for(int i=k-1; i>=0; i--)
        num=num*2+binary[i];

    cout<<num;
    return 0;
}