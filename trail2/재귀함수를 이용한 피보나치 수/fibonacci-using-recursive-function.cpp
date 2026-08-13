#include <iostream>
using namespace std;

int fibonacci(int N){
    if(N==1)
        return 1;
    if(N==2)
        return 1;

    return fibonacci(N-1)+fibonacci(N-2);
}

int main(){
    int N;
    cin>>N;
    cout<<fibonacci(N);
    return 0;
}