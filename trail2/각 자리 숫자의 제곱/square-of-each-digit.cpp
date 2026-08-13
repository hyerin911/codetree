#include <iostream>
using namespace std;

int N;

int sum(int N){
    if(N<10){
        return N*N;
    }
    return sum(N/10)+(N%10)*(N%10);
}

int main() {
    // Please write your code here.
    cin>>N;

    cout<<sum(N);
    return 0;
}