#include <iostream>
#include <string>
using namespace std;



class Secret{
    public:
    string code; char place; int T;
        Secret(string code, char place, int T){
            this->code=code;
            this->place=place;
            this->T=T;
    }
};

int main() {
    // Please write your code here.
    string code; char place; int T;

    cin>>code>>place>>T;

    Secret secret1=Secret(code, place, T);
    cout<<"secret code : "<<secret1.code<<endl;
    cout<<"meeting point : "<<secret1.place<<endl;
    cout<<"time : "<<secret1.T<<endl;
    return 0;
}