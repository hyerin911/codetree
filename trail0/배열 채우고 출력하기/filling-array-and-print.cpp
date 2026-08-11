#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char list[10];

    for(int i=0; i<10; i++){
        cin>>list[i];
    }

    for(int j=9; j>=0; j--){
        cout<<list[j];
    }
    return 0;
}