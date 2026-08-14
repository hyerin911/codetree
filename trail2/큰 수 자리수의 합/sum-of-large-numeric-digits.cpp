#include <iostream>

using namespace std;

int a, b, c;

int sum(int m){
    if(m==0){
        return m;
    }
    return sum(m/10)+(m%10);
}



int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    cout<<sum(a*b*c);
    return 0;
}