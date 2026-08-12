#include <iostream>
using namespace std;

bool third(int n){
    while(n>0){
        if(n%10==3 || n%10==6 || n%10==9){
            return true;
        }
        n/=10;
    }

    return false;
}

void count(int A, int B){
    int cnt=0;
    for(int i=A; i<=B; i++){
        if(i%3==0 || third(i)){
            cnt++;
        }
    }

    cout<<cnt;
}

int main() {
    // Please write your code here.
    int A, B;
    cin>>A>>B;

    count(A, B);
    return 0;
}