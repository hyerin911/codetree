#include <iostream>
using namespace std;

bool judge(string &A){
    for(int i=0; i<(int) A.size()-1; i++){
        for(int j=i+1; j<(int) A.size(); j++){
            if(A[i]!=A[j]){
                return true;
            }
        }
    }
    return false;
}

int main() {
    // Please write your code here.
    string A;
    cin>>A;

    if(judge(A)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}