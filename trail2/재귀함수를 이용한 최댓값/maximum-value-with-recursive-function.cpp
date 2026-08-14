#include <iostream>
#include <algorithm>

#define MAX_N 100

using namespace std;

int arr[MAX_N];

int MaxValue(int a){
    if(a==0)
        return arr[0];
    
    return max(MaxValue(a-1), arr[a]);
}

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    cout<<MaxValue(n-1)<<"\n";

    return 0;
}