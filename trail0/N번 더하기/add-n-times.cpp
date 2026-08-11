#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, N;
    cin>>A;
    cin>>N;

    for(int i=0; i<N; i++){
        cout<<A+N*(i+1)<<"\n";
    }
    return 0;
}