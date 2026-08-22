#include <iostream>
#define MAX_N 1000000

using namespace std;

int n, m;
char d[1000];
int t[1000];
char d2[1000];
int t2[1000];

int second_d[MAX_N+1];
int second_d2[MAX_N+1];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> d[i] >> t[i];
    for (int i = 0; i < m; i++) cin >> d2[i] >> t2[i];

    // Please write your code here.

    int now=0;
    int location_d=0;

    for(int i=0; i<n; i++){
        if(d[i]=='L'){
            for(int j=1; j<=t[i]; j++){
                second_d[now+j]=location_d-j;
            }
            now=now+t[i];
            location_d=location_d-t[i];
        }
        else{
            for(int j=1; j<=t[i]; j++){
                second_d[now+j]=location_d+j;
            }
            now=now+t[i];
            location_d=location_d+t[i];
        }
    }

    now=0;
    location_d=0;

    for(int i=0; i<m; i++){
        if(d2[i]=='L'){
            for(int j=1; j<=t2[i]; j++){
                second_d2[now+j]=location_d-j;
            }
            now=now+t2[i];
            location_d=location_d-t2[i];
        }
        else{
            for(int j=1; j<=t2[i]; j++){
                second_d2[now+j]=location_d+j;
            }
            now=now+t2[i];
            location_d=location_d+t2[i];
        }
    }

    int time=0;
    for (int i = 0; i < n; i++)
        time+=t[i];

    int i=1;
    while(i<=time){
        if(second_d[i]==second_d2[i]){
            cout<<i;
            break;
        }
        i++;
        if(i>time){
            cout<<-1;
        }
    }
    
    return 0;
}