#include <iostream>
using namespace std;

int what;

void right(int N){
    what++;
    cout<<what<<" ";
    N--;
    if(N>0){
        right(N);
    }
}

void left(int N){
    cout<<N<<" ";
    N--;
    if(N>0){
        left(N);
    }
}

int main() {
    // Please write your code here.
    int N;
    cin>>N;
    right(N);
    cout<<"\n";
    left(N);

    return 0;
}