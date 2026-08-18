#include <iostream>
#include <string>
using namespace std;

class Weather{
    public:
    string year, date, sky; 
    Weather(string year, string date, string sky){
        this->year=year;
        this->date=date;
        this->sky=sky;
    }

    Weather(){};
};

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    Weather weather[n];

    for(int i=0; i<n; i++){
        string y, d, s;
        cin>>y>>d>>s;
        weather[i]=Weather(y, d, s);
    }

    int idx=0;
    for(int j=0; j<n; j++){
        if(weather[j].sky=="Rain"){
            idx=j;
        }
    }
    
    for(int i=0; i<n; i++){
        if(weather[i].year<weather[idx].year){
            if(weather[i].sky=="Rain"){
                idx=i;
            }
        }
    }

    cout<<weather[idx].year<<" "<<weather[idx].date<<" "<<weather[idx].sky<<endl;
    return 0;
}