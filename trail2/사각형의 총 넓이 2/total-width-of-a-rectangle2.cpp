#include <iostream>
#define OFFSET 100
#define MAX_N 100

using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];

bool result[2*MAX_N+1][2*MAX_N+1];

void rectangle(){
    for(int i=0; i<N; i++){
        for(int row=x1[i]; row<x2[i]; row++){
            for(int column=y1[i]; column<y2[i]; column++)
                result[row][column]=true;
        }
    }
}

int main() {

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        x1[i]+=OFFSET;
        y1[i]+=OFFSET;
        x2[i]+=OFFSET;
        y2[i]+=OFFSET;
    }

    // Please write your code here.

    rectangle();

    int cnt=0;

    for(int i=0; i<2*MAX_N+1; i++){
        for(int j=0; j<2*MAX_N+1; j++){
            if(result[i][j]){
                cnt++;
            }
        }
    }

    cout<<cnt;
    return 0;
}