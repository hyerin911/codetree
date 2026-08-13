#include <iostream>
using namespace std;

void star(int N){
    if(N==0)
        return;

    star(N-1);

    for(int i=0; i<N; i++){
        cout<<"*";
    }
    cout<<"\n";
}

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    star(N);

    return 0;
}