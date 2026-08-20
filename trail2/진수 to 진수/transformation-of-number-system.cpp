#include <iostream>
#include <string>

using namespace std;

int a, b;
string n;

int main() {
    cin >> a >> b;
    cin >> n;

    // Please write your code here.
    int arr[100];
    int original=0;

    int k=0;

    while(true){
        if(n.length()-1==k){
            original=original*a+(n[k]-'0');
            break;
        }
        original=original*a+(n[k++]-'0');
    }

    int i=0;

    while(true){
        if(original<b){
            arr[i]=original;
            break;
        }
        arr[i++]=original%b;
        original/=b;
    }

    for(int j=i; j>=0; j--){
        cout<<arr[j];
    }
    return 0;
}