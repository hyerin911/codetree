#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];

int k[2000];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }
    // Please write your code here. 

    int original=1000;

    for(int i=0; i<n; i++){
        if(dir[i]=='L'){
            for(int j=1; j<x[i]+1; j++){
                k[original-j]++;
            }
            original=original-x[i];
        }
        if(dir[i]=='R'){
            for(int j=0; j<x[i]; j++){
                k[j+original]++;
            }
            original=original+x[i];
        }    
    }

    int cnt=0;

    for(int i=0; i<2000; i++){
        if(k[i]>1){
            cnt++;
        }
    }

    cout<<cnt;

    return 0;
}