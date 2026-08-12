#include <iostream>
using namespace std;

void yesno(int n){
    if(n%2==0 && ((n%10)+(n/10))%5==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

int main() {
    // Please write your code here.

    int n;
    cin>>n;

    yesno(n);

    return 0;
}