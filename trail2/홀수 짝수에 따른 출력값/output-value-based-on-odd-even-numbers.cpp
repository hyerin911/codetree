#include <iostream>
using namespace std;

int judge(int N){
    if(N<=2){
        return N;
    }
    return judge(N-2)+N;
}

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    cout<<judge(N);
    return 0;
}