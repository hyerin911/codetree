#include <iostream>
using namespace std;

int calculate(int N){
    if(N==1){
        return 1;
    }
    if(N==2){
        return 2;
    }

    return calculate(N/3)+calculate(N-1);
}

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    cout<<calculate(N);
    return 0;
}