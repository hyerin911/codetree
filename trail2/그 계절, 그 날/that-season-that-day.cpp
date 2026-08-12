#include <iostream>
using namespace std;

bool yun(int n){
    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}

int endDays(int n, int m){
    if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12){
        return 31;
    }
    else if(n==4 || n==6 || n==9 || n==11 ){
        return 30;
    }
    else{
        if(yun(m)){
            return 29;
        }
        else{
            return 28;
        }
    }
}

bool isReal(int Y, int M, int D){
    if(D<=endDays(M, Y)){
        return true;
    }
    return false;
}

int main() {
    // Please write your code here.
    int Y, M, D;
    cin>>Y>>M>>D;

    if(isReal(Y, M, D)){
        if(M<=5 && M>=3){
            cout<<"Spring";
        }
        if(M<=8 && M>=6){
            cout<<"Summer";
        }
        if(M<=11 && M>=9){
            cout<<"Fall";
        }
        if(M==12 || M==1 || M==2){
            cout<<"Winter";
        }
    }
    else{
        cout<<"-1";
    }

    return 0;
}