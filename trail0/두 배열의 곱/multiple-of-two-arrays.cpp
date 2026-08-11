#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int index1[3][3];
    int index2[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>index1[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>index2[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<index1[i][j]*index2[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}