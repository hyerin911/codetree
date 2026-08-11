#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;

    cin>>N;

    int list[N];
    for(int i=0; i<N; i++){
        cin>>list[i];
    }

    for(int j=0; j<N; j++){
        cout<<list[j]*list[j]<<" ";
    }

    return 0;
}