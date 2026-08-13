#include <iostream>
#include <algorithm>
using namespace std;

void calculate(int &a, int &b){
    if(a>b){
        a+=25;
        b*=2;
    }
    else{
        a*=2;
        b+=25;
    }

}

int main() {
    // Please write your code here.
    int a, b;
    cin>>a>>b;

    calculate(a, b);
    cout<<a<<" "<<b;

    return 0;
}