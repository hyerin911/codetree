#include <iostream>
using namespace std;

void min(int a, int b, int c){
    int min_val=100;
    if(min_val>a){
        min_val=a;
    }
    if(min_val>b){
        min_val=b;
    }
    if(min_val>c){
        min_val=c;
    }

    cout<<min_val;
}

int main() {
    // Please write your code here.
    int a, b, c;
    cin>>a>>b>>c;

    min(a, b, c);
    return 0;
}