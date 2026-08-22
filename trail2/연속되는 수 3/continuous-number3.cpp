#include <iostream>
#include <algorithm>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.

    int cnt_plus=0, cnt_minus=0, result=0;

    for(int i=0; i<N; i++){
        if(i==0){
            continue;
        }
        if(arr[i]>0 && arr[i-1]>0){
            cnt_plus++;
            result=max(cnt_plus, result);
            }
        else if(arr[i]<0 && arr[i-1]<0){
            cnt_minus++;
            result=max(cnt_minus, result);
            }
        else{
            cnt_plus=0;
            cnt_minus=0;
        }
    }
    
    cout<<result+1;

    return 0;
}