#include <iostream>
#define OFFSET 100
#define MAX_N 100

using namespace std;

int N;
int x[100], y[100];
int arr[2*MAX_N+1][2*MAX_N+1];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.

    for(int i=0; i<N; i++){
        x[i]+=OFFSET;
        y[i]+=OFFSET;
    }

    for(int i=0; i<N; i++){
        for(int j=x[i]; j<x[i]+8; j++){
            for(int k=y[i]; k<y[i]+8; k++){
                arr[j][k]=1;
            }
        }
    }

    int cnt=0;

    for(int i=0; i<2*MAX_N+1; i++){
        for(int j=0; j<2*MAX_N+1; j++){
            if(arr[i][j]==1){
                cnt++;
            }
        }
    }

    cout<<cnt;

    return 0;
}