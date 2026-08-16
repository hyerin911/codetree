#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    string words[n];

    for(int i=0; i<n; i++){
        cin>>words[i];
    }

    sort(words, words+n);

    for(int i=0; i<n; i++){
        cout<<words[i]<<"\n";
    }

    return 0;
}