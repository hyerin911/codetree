#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int list[10];
    cin>>list[0];
    cin>>list[1];

    for(int i=0; i<8; i++){
        list[i+2]=(list[i]+list[i+1])%10;
    }

    for(int j=0; j<10; j++){
        cout<<list[j]<<" ";
    }

    return 0;
}