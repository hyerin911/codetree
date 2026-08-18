#include <iostream>
#include <string>
using namespace std;

class Game{
    public:
    string id; int level;

    Game(string id, int level){
        this->id=id;
        this->level=level;
    }
};

int main() {
    // Please write your code here.
    string id; int level;
    
    cin>>id;
    cin>>level;

    Game codetree=Game("codetree", 10);
    Game hello=Game(id, level);
    cout<<"user "<<codetree.id<<" lv "<<codetree.level<<endl;
    cout<<"user "<<hello.id<<" lv "<<hello.level<<endl;
    return 0;
}