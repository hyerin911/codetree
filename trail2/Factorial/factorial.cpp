#include <iostream>
using namespace std;

int Factorial(int N){
    if(N==1){
        return 1;
    }
    return Factorial(N-1)*N;
}

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    cout<<Factorial(N);
    return 0;
}