#include <iostream>
using namespace std;

int cnt;

int calculate(int N){
    if(N==1)
        return cnt; 
    if(N%2==0){
        cnt++;
        return calculate(N/2);
    }
    else{
        cnt++;
        return calculate(N/3);
    }
}

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    cout<<calculate(N);

    return 0;
}