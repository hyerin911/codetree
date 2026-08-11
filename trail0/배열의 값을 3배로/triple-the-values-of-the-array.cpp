#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int index[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>index[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<index[i][j]*3<<" ";
        }
        cout<<"\n";
    }
    return 0;
}