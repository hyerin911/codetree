#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;

    int diff=(a*24*60+b*60+c)-(11*24*60+11*60+11);

    if(diff<0)
        cout<<-1<<'\n';
    else
        cout<<diff<<'\n';
    return 0;
}