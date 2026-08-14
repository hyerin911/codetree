#include <iostream>
#define MAX_N 100

using namespace std;

int arr[MAX_N];

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b){
    return (a/gcd(a, b))*b;
}

int get_lcm_all(int idx, int n){
    if(idx==n-1) return arr[idx];

    return lcm(arr[idx], get_lcm_all(idx+1, n));
}

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<get_lcm_all(0, n)<<"\n";

    return 0;
}