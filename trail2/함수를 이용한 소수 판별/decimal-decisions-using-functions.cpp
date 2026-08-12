#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

int main() {
    // Please write your code here.
    int A, B;
    cin>>A>>B;

    int sum=0;

    for(int i=A; i<=B; i++){
        if(isPrime(i)){
            sum+=i;
        }
    }

    cout<<sum;

    return 0;
}