#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Person{
    public:
    string name, address, strict;

    Person(string name, string address, string strict){
        this->name=name;
        this->address=address;
        this->strict=strict;
    }

    Person(){};
};

int main() {
    // Please write your code here.
    int num;
    cin>>num;

    Person person[num];

    string n, a, s;

    for(int i=0; i<num; i++){
        cin>>n>>a>>s;
        person[i]=Person(n, a, s);
    }

    string NAME="";
    int idx;
    for(int i=0; i<num; i++){
        if(person[i].name>NAME){
            NAME=person[i].name;
            idx=i;
        }
    }

    cout<<"name "<<person[idx].name<<endl;
    cout<<"addr "<<person[idx].address<<endl;
    cout<<"city "<<person[idx].strict<<endl;
    return 0;
}