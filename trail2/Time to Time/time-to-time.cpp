#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B, C, D;
    cin>>A>>B>>C>>D;

    int hour=A, mins=B;
    int elapsed_time=0;

    while(true){
        if(hour==C && mins==D)
            break;
        
        elapsed_time++;
        mins++;

        if(mins==60){
            hour++;
            mins=0;
        }
    }

    cout<<elapsed_time;

    return 0;
}