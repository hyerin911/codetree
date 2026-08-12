#include <iostream>
#include <algorithm>
using namespace std;

void FindLcm(int n, int m){
    int lcm;
    for(int i=max(n, m); i>1; i++){
        if(i%n==0 && i%m==0){
            lcm=i;
            break;
        }
    }
    cout<<lcm;
}

int main() {
    // Please write your code here.

    int n, m;
    cin>>n>>m;

    FindLcm(n, m);

    return 0;
}