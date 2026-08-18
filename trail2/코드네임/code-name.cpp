#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Person{
    public:
    int score; char name;

    Person(char name, int score=0){
        this->name=name;
        this->score=score;
    }

    Person(){}
};

int main() {
    // Please write your code here.
    Person person[5];
    for(int i=0; i<5; i++){
        char n; int s;
        cin>>n>>s;
        person[i]=Person(n, s);
    }

    int min=100;
    int where;
    for(int i=0; i<5; i++){
        if(person[i].score<min){
            min=person[i].score;
            where=i;
        }
    }

    cout<<person[where].name<<" "<<person[where].score;





    return 0;
}