#include <iostream>
#define OFFSET 100000

using namespace std;

int n;
int x[1000];
char dir[1000];
int check_white[200000];
int check_black[200000];
int original;
char label[200000];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    original+=OFFSET;
    
    // Please write your code here.

    for(int i=0; i<n; i++){
        if(dir[i]=='L'){
            for(int j=0; j<x[i]; j++){
                check_white[original-j]++;
                label[original-j]='W';
            }
            original=original-x[i]+1;
        }
        else if(dir[i]=='R'){
            for(int j=0; j<x[i]; j++){
                check_black[original+j]++;
                label[original+j]='B';
            }
            original=original+x[i]-1;
        }
    }

    int cnt_white=0, cnt_black=0, cnt_gray=0; 

    for(int i=0; i<200000; i++){
        if(check_white[i]>1 && check_black[i]>1){
            cnt_gray++;
        }
        else if(label[i]=='W'){
            cnt_white++;
        }
        else if(label[i]=='B'){
            cnt_black++;
        }
    }

    cout<<cnt_white<<" "<<cnt_black<<" "<<cnt_gray;

    return 0;
}