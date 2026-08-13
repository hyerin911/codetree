#include <iostream>
using namespace std;

void wannaPrint(int N){
    if(N==0){
        return;
    }
    cout<<N<<" ";
    wannaPrint(N-1);
    cout<<N<<" ";
}

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    wannaPrint(N);
    return 0;
}