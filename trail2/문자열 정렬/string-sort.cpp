#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    cout<<s;
    return 0;
}