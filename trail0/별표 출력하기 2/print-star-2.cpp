#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    for(int i=0; i<N; i++){
        for(int j=N-i; j>0; j--){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}