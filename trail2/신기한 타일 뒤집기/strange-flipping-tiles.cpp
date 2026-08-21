#include <iostream>
#define MAX_N 100000

using namespace std;

int n;
int x[1000];
char dir[1000];

char color[2*MAX_N+1];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    // Please write your code here.

    int original=MAX_N;

    for(int i=0; i<n; i++){
            if(dir[i]=='L'){
                for(int j=0; j<x[i]; j++)
                    color[original-j]='W';
                original=original-x[i]+1;
            }
            if(dir[i]=='R'){
                for(int j=0; j<x[i]; j++)
                    color[original+j]='B';
                original=original+x[i]-1;
            }
    }

    int cnt_white=0, cnt_black=0;

    for(int i=0; i<2*MAX_N+1; i++){
        if(color[i]=='W'){
            cnt_white++;
        }
        else if(color[i]=='B'){
            cnt_black++;
        }
    }

    cout<<cnt_white<<" "<<cnt_black<<endl;

    return 0;
}