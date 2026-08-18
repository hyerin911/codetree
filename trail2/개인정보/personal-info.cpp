#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Person{
    public:
    string name; int height; float weight;
    Person(string name, int height, float weight){
        this->name=name;
        this->height=height;
        this->weight=weight;
    }
    Person(){};
};

bool cmp_name(Person a, Person b){
    return a.name<b.name;
}

bool cmp_height(Person a, Person b){
    return a.height>b.height;
}

int main() {
    // Please write your code here.
    string n; int h; float w;

    Person person[5];

    for(int i=0; i<5; i++){
        cin>>n>>h>>w;
        person[i]=Person(n, h, w);
    }

    cout<<fixed;
    cout.precision(1);

    sort(person, person+5, cmp_name);
    cout<<"name"<<endl;
    for(int i=0; i<5; i++){
        cout<<person[i].name<<" "<<person[i].height<<" "<<person[i].weight<<endl;
    }

    cout<<"\n";

    sort(person, person+5, cmp_height);
    cout<<"height"<<endl;
    for(int i=0; i<5; i++){
        cout<<person[i].name<<" "<<person[i].height<<" "<<person[i].weight<<endl;
    }
    return 0;
}