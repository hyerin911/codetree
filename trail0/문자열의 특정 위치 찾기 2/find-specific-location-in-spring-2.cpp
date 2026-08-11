#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string fruit[5]={"apple", "banana", "grape", "blueberry", "orange"};
    
    char moji;
    cin>>moji;
    int total=0;
    
    for(int i=0; i<5; i++){
        for(int j=2; j<4; j++){
            if(fruit[i][j]==moji){
                total+=1;
                cout<<fruit[i]<<"\n";
            };
        }
    }

    cout<<total;
    return 0;
}