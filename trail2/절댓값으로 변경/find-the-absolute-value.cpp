#include <iostream>
using namespace std;

int N;

void absolute_v(int *arr){
    for(int i=0; i<N; i++){
        if(arr[i]<0){
            arr[i]=-arr[i];
        }
    }
}

int main() {
    // Please write your code here.
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }

    absolute_v(arr);

    for(int i=0; i<N; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}