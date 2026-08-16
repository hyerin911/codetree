#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int N, K;
    cin>>N>>K;

    int arr[N];

    for(int i=0; i<N; i++){
        cin>>arr[i];
    }

    sort(arr, arr+N);

    cout<<arr[K-1];
    
    return 0;
}