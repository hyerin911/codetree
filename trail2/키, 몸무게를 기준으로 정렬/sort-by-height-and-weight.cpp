#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Person{
    public:
    string name; int height, weight;
    Person(string name, int height, int weight){
        this->name=name;
        this->height=height;
        this->weight=weight;
    }
    Person(){};
};

bool cmp(Person a, Person b){
    if(a.height==b.height){
        return a.weight>b.weight;
    }
    return a.height<b.height;
}

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    Person person[N];
    string n; int h, w;
    
    for(int i=0; i<N; i++){
        cin>>n>>h>>w;
        person[i]=Person(n, h, w);
    }

    sort(person, person+N, cmp);

    for(int i=0; i<N; i++){
        cout<<person[i].name<<" "<<person[i].height<<" "<<person[i].weight<<endl;
}
    return 0;
}