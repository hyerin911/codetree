#include <iostream>
#include <algorithm>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int cnt=1, result=1;

    for(int i=0; i<N; i++){
        if(i==0)
            continue;
        else if(arr[i]>arr[i-1]){
            cnt++;
            result=max(result, cnt);
        }
        else
            cnt=1;
    }

    cout<<result;

    return 0;
}