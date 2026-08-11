#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin>>a;
    cin>>b;
    cin>>c;

    int sum=a+b+c;
    int average=sum/3;
    int minus=sum-average;

    cout<<sum<<"\n"<<average<<"\n"<<minus;
    // Please write your code here.
    return 0;
}