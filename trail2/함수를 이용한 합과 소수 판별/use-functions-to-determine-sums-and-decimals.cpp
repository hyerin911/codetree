#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n==1){
        return false; //예외처리
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

bool sum(int n){
    int digit_sum=(n/100)+((n/10)%10)+(n%10);
    if(digit_sum%2==0){
        return true;
    }
    return false;
}

bool test(int n){
    if(isPrime(n) && sum(n)){
        return true;
    }
    return false;
}

int main() {
    // Please write your code here.
    int A, B;
    cin>>A>>B;

    int cnt=0;

    for(int i=A; i<=B; i++){
        if(test(i)){
            cnt++;
        }
    }

    cout<<cnt;

    return 0;
}