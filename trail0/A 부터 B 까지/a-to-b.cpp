#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B;
    cin>>A>>B;

    while(A<=B){
        if(A%2==1){
            cout<<A<<" ";
            A*=2;
        }
        else{
            cout<<A<<" ";
            A+=3;
        }
    }

    return 0;
}