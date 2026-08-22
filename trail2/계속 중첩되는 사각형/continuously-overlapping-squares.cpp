#include <iostream>
#define OFFSET 100
#define MAX_N 100

using namespace std;

int n;
int x1[10], y1[10];
int x2[10], y2[10];

char arr[2*MAX_N+1][2*MAX_N+1];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        x1[i]+=OFFSET; x2[i]+=OFFSET;
        y1[i]+=OFFSET; y2[i]+=OFFSET;
    }

    // Please write your code here.

    for(int i=0; i<n; i++){
        for(int j=x1[i]; j<x2[i]; j++){
            for(int k=y1[i]; k<y2[i]; k++){
                if(i%2==0)
                    arr[j][k]='R';
                else
                    arr[j][k]='B';
            }
        }
    }

    int cnt=0;

    for(int i=0; i<2*MAX_N+1; i++){
        for(int j=0; j<2*MAX_N+1; j++){
            if(arr[i][j]=='B')
                cnt++;
        }
    }

    cout<<cnt;

    return 0;
}