#include <iostream>
using namespace std;

int main() {
    int A, B;

    cin>>A;
    cin>>B;

    int sum=A+B;
    double average=(double)sum/2;

    cout<<fixed;
    cout.precision(1);

    cout<<sum<<" "<<average;
    // Please write your code here.
    return 0;
}