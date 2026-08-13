#include <iostream>
using namespace std;

int a, b;

void calculate(int &a, int &b){
    if(a>b){
        a*=2;
        b+=10;
    }
    else{
        a+=10;
        b*=2;
    }
}

int main() {
    // Please write your code here.
    cin>>a>>b;

    calculate(a, b);

    cout<<a<<" "<<b;
    return 0;
}