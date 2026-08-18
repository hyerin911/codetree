#include <iostream>
#include <string>
using namespace std;

class Bomb{
    public:
    string code; char color; int second;

    Bomb(string code, char color, int second){
        this->code=code;
        this->color=color;
        this->second=second;
    }
};

int main() {
    // Please write your code here.
    string cd; char cl; int sc;
    cin>>cd>>cl>>sc;
    Bomb bomb=Bomb(cd, cl, sc);

    cout<<"code : "<<bomb.code<<endl;
    cout<<"color : "<<bomb.color<<endl;
    cout<<"second : "<<bomb.second<<endl;

    return 0;
}