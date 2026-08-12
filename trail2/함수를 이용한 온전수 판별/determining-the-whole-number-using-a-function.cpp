#include <iostream>
using namespace std;

bool onejeon(int n){
    if(n%2==0 || n%10==5){
        return false;
    }
    else if(n%3==0){
        if(n%9!=0){
            return false;
        }
    }

    return true;
}

int main() {
    // Please write your code here.
    int A, B;
    cin>>A>>B;

    int cnt=0;

    for(int i=A; i<=B; i++){
        if(onejeon(i)){
            cnt++;
        }
    }

    cout<<cnt;

    return 0;
}