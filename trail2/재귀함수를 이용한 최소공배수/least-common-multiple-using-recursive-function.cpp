#include <iostream>
#include <algorithm>

#define MAX_N 10

using namespace std;

int n;
int arr[MAX_N+1];

int LCM(int a, int b){ //단일 최소공배수구하기
    int gcd=1;
    for(int i=1; i<=min(a, b); i++){
        if(a%i==0 && b%i==0)
            gcd=i;
    }
    return a*b/gcd; //겹치는부분제거
}

int GetLCMAll(int index){
    if(index==1)
        return arr[1];

    return LCM(GetLCMAll(index-1), arr[index]);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    cout<<GetLCMAll(n);
    return 0;
}