#include <iostream>
#include <string>

using namespace std;

int main() {
    // Please write your code here.
    int n, b;
    cin>>n>>b;

    int result[100];
    int cnt=0;

    while(true){
        if(n<b){
            result[cnt]=n;
            break;
        }
        result[cnt++]=n%b;
        n/=b;
    }

    for(int i=cnt; i>=0; i--){
        cout<<result[i];
    }
    return 0;
}