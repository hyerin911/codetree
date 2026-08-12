#include <iostream>
using namespace std;

void sum(int N){
    int sum=0;
    for(int i=1; i<=N; i++){
        sum+=i;
    }

    sum/=10;
    cout<<sum;
}

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    sum(N);
    
    return 0;
}