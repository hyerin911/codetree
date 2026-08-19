#include <iostream>
#include <algorithm>
using namespace std;

class Location{
    public:
    int value, num;
    Location(int value, int num){
        this->value=value;
        this->num=num;
    }
    Location(){};
};

bool cmp(Location a, Location b){
    if(a.value!=b.value)
        return a.value<b.value;
    return a.num<b.num;
}

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    int v, n=0;

    Location location[N];
    Location location_copy[N];

    for(int i=0; i<N; i++){
        cin>>v;
        location[i]=Location(v, i);
    }

    sort(location, location+N, cmp);

    
    for(int i=0; i<N; i++){
        location_copy[location[i].num].num=i+1;
    }

    for(int i=0; i<N; i++){
        cout<<location_copy[i].num<<" ";
    }


    return 0;
}