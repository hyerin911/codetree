#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string moji;
    cin>>moji;

    moji[1]='a';
    moji[moji.length()-2]='a';
    

    cout<<moji;
    return 0;
}