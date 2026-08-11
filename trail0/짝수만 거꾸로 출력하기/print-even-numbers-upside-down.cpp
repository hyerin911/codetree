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

    for(int j=N-1; j>=0; j--){
        if(list[j]%2==0){
            cout<<list[j]<<" ";
        }
    }
    return 0;
}