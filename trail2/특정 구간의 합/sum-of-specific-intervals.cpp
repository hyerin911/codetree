#include <iostream>
#define MAX_N 101
using namespace std;

int N, M;
int arr[MAX_N];

void sum(int a, int b){
    int local_sum=0;
    for(int i=a-1; i<b; i++){
        local_sum+=arr[i];
    }
    cout<<local_sum<<"\n";
}


int main() {
    // Please write your code here.
    cin>>N>>M;
    
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }

    int a, b;
    
    for(int i=0; i<M; i++){
        cin>>a>>b;
        sum(a, b);
    }

    return 0;
}