#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];

int block[101];

int main() {
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
    }

    // Please write your code here.

    //stack
    for(int i=0; i<K; i++){
        for(int j=A[i]; j<=B[i]; j++){
            block[j]++;
        }
    }

    int max=0;

    for(int i=1; i<=N; i++){
        if(max<block[i]){
            max=block[i];
            }
    }

    cout<<max;
    return 0;
}