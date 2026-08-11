#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int list[10];
    int total_3=0;
    int total_5=0;

    for(int i=0; i<10; i++){
        cin>>list[i];
        if(list[i]%3==0){
            total_3+=1;
        }
        if(list[i]%5==0){
            total_5+=1;
        }
    }

    cout<<total_3<<" "<<total_5;
    return 0;
}