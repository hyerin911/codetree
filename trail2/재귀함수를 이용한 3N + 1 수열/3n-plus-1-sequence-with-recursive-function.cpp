#include <iostream>

using namespace std;

int n, cnt;

int calculate(int n){
    if(n==1){
        return cnt;
    }
    if(n%2==0){
        cnt++;
        return calculate(n/2);
    }
    else{
        cnt++;
        return calculate(n*3+1);
    }
}

int main() {
    cin >> n;
    // Please write your code here.

    cout<<calculate(n);

    return 0;
}