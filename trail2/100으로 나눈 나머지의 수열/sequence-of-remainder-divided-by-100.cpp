#include <iostream>
using namespace std;

int calculate(int N){
    if(N==1){
        return 2;
    }
    if(N==2){
        return 4;
    }

    return calculate(N-1)*calculate(N-2)%100;

}

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    cout<<calculate(N);

    return 0;
}