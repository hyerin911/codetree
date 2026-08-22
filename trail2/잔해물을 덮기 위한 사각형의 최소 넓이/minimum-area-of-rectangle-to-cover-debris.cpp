#include <iostream>
#define OFFSET 1000
#define MAX_N 1000

using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];
int arr[2*MAX_N+1][2*MAX_N+1];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    // Please write your code here.

    int i=0;

    while(i<2){
        x1[i]+=OFFSET;
        x2[i]+=OFFSET;
        y1[i]+=OFFSET;
        y2[i]+=OFFSET;
        i++;
    }

    for(int i=0; i<2; i++){
        for(int j=x1[i]; j<x2[i]; j++){
            for(int k=y1[i]; k<y2[i]; k++){
                arr[j][k]=i+1;
            }
        }
    }

    int min_x=2*MAX_N+1, min_y=2*MAX_N+1, max_x=0, max_y=0;

    for(int i=0; i<2*MAX_N+1; i++){
        for(int j=0; j<2*MAX_N+1; j++){
            if(arr[i][j]==1){
                if(i<min_x)
                    min_x=i;
                else if(i>max_x)
                    max_x=i;
                if(j<min_y)
                    min_y=j;
                else if(j>max_y)
                    max_y=j;
            }
        }
    }

    int cnt=0;

    for(int i=min_x; i<max_x+1; i++){
        for(int j=min_y; j<max_y+1; j++){
            cnt++;
        }
    }

    cout<<cnt;

    return 0;
}