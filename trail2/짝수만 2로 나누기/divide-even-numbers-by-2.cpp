#include <iostream>
using namespace std;

void divide_2(int *x, int N){
    for(int i=0; i<N; i++){
        if(*x%2==0){
            *x/=2;
        }
        x++;
    }
}

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    int arr[N];
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }

    divide_2(arr, N);

    for(int i=0; i<N; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}