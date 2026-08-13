#include <iostream>
using namespace std;

int amount;

void sum(int N){
    if(N==0){
        return;
    }
    amount+=N;
    sum(N-1);
}

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    sum(N);
    cout<<amount;
    return 0;
}