#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m1, d1, m2, d2;
    cin>>m1>>d1>>m2>>d2;

    int elapsed_time=0;

    int num_of_days[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


    while(true){
        elapsed_time++;

        if(m1==m2 && d1==d2){
            break;
        }

        d1++;

        if(d1>num_of_days[m1]){
            m1++;
            d1=1;
        }
    }

    cout<<elapsed_time<<endl;
    return 0;
}