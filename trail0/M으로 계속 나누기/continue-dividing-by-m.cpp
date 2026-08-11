#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N, M;
    cin>>N;
    cin>>M;

    while(N>=1){
        cout<<N<<"\n";
        N=N/M;
    }

    return 0;
}