#include <iostream>
#include <algorithm> ///algorithm 모듈받아오면 min 사용가능
using namespace std;

void FindGcd(int n, int m){
    int gcd=0;
    for(int i=1; i<=min(n,m); i++){
        if(n%i==0 && m%i==0){
            gcd=i;
        }
    }
    cout<<gcd<<"\n";
}

int main() {
    // Please write your code here.
    int n, m;
    cin>>n>>m;

    FindGcd(n, m);

    return 0;
}