#include <iostream>
#include <string>

using namespace std;

string text, pattern;

bool IsSubStr(int start_idx){
    int n=(int) text.size();
    int m=(int) pattern.size();

    if(start_idx+m>n){
        return false;
    }

    for(int j=0; j<m; j++){
        if(text[start_idx+j]!=pattern[j]){
            return false;
        }
    }
    return true;
}

int FindIndex(){
    int n=(int)text.size();
    for(int i=0; i<n; i++){
        if(IsSubStr(i)){
            return i;
        }
    }
    return -1;
}

int main(){
    cin>>text;
    cin>>pattern;
    
    cout<<FindIndex()<<"\n";
    return 0;
}