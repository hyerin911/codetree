#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool what(string str1, string str2){
    if(str1.length()==str2.length()){
        for(int i=0; i<str1.length(); i++){
            if(str1[i]!=str2[i])
                return false;
        }
    }
    else{
        return false;
    }
    return true;
}

int main() {
    // Please write your code here.
    string str1, str2;    
    
    cin>>str1;
    cin>>str2;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(what(str1, str2)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}