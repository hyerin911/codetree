#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;
    int num=1;

    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num+=1;         
        }
        cout<<"\n";
    }
    return 0;
}