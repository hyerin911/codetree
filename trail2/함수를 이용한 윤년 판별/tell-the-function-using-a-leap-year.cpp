#include <iostream>
using namespace std;

bool isYear(int n){
    if(n%4!=0 || ((n%100==0)&&(n%400!=0))){
        return false;
    }

    return true;
}


int main() {
    // Please write your code here.
    int y;
    cin>>y;

    if(isYear(y)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}