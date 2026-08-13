#include <iostream>
using namespace std;

void again(int N){
    cout<<"HelloWorld"<<"\n";
    N--;
    if(N>0){
        again(N);
    }
}

int main() {
    // Please write your code here.
    int N;
    cin>>N;
    again(N);
    return 0;
}