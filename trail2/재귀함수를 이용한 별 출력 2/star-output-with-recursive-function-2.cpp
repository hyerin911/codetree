#include <iostream>
using namespace std;

void printStar(int N){
    if(N==0){
        return;
    }
    
    for(int i=0; i<N; i++){
        cout<<"* ";}
    cout<<"\n";

    printStar(N-1);
    
    for(int i=0; i<N; i++){
        cout<<"* ";
    }
    cout<<"\n";
}

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    printStar(N);
    return 0;
}