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
    return a.height<b.height;
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    string namae; int H, W;

    Person person[n];

    for(int i=0; i<n; i++){
        cin>>namae>>H>>W;
        person[i]=Person(namae, H, W);
    }

    sort(person, person+n, cmp);

    for(int i=0; i<n; i++){
        cout<<person[i].name<<" "<<person[i].height<<" "<<person[i].weight<<endl;
    }
    return 0;
}