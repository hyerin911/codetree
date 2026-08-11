#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A_math, A_english, B_math, B_english;

    cin>>A_math>>A_english;
    cin>>B_math>>B_english;

    if(A_math>B_math && A_english>B_english){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}