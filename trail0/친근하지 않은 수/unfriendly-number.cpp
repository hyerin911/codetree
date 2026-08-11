#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;
    int count=0;

    for(int i=1; i<=N; i++){
        if(i%2==0 || i%3==0 || i%5==0){
            continue;
        }
        count+=1;
    }

    cout<<count;

    return 0;
}