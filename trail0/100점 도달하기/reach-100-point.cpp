#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int score;
    cin>>score;

    for(int i=score; i<=100; i++){
        if(90<=i){
            cout<<"A ";
        }
        else if(80<=i){
            cout<<"B ";
        }
        else if(70<=i){
            cout<<"C ";
        }
        else if(60<=i){
            cout<<"D ";
        }
        else{
            cout<<"F ";
        }
    }
    return 0;
}