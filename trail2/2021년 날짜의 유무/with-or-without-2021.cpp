#include <iostream>
using namespace std;

bool isDate(int M, int D){
    if(M==1 || M==3 || M==5 || M==7 || M==8 || M==10 || M==12){
        if(D<=31){
            return true;
        }
    }
    else if(M==2){
        if(D<=28){
            return true;
        }
    }
    else if(M==4 || M==6 || M==9 || M==11){
        if(D<=30){
            return true;
        }
    }

    return false; 
}

int main() {
    // Please write your code here.
    int M, D;
    cin>>M>>D;
    
    if(isDate(M, D)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}