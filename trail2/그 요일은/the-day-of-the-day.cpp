#include <iostream>
#include <string>

using namespace std;

int main() {
    // Please write your code here.
    int m1, d1, m2, d2;
    int day=0, cnt=0;
    string A;

    int day_month[]={0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string day_week[]={"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    cin>>m1>>d1>>m2>>d2;
    cin>>A;

    while(true){
        if(day_week[day]==A){
            cnt++;
        }

        if(m1==m2 && d1==d2){
            break;
        }

        day++;

        if(day>6){
            day=0;
        }

        d1++;
        if(d1>day_month[m1]){
            m1++;
            d1=1;
        }
    }

    cout<<cnt;
    return 0;
}