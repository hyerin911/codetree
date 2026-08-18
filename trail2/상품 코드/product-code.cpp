#include <iostream>
#include <string>
using namespace std;

class Product{
    public:
    string name; int code;

    Product(string name="", int code=0){
        this->name=name;
        this->code=code;
    }
};

int main() {
    // Please write your code here.
    string n; int c;

    cin>>n>>c;

    Product p1=Product("codetree", 50);
    Product p2=Product(n, c);

    cout<<"product "<<p1.code<<" is "<<p1.name<<endl;
    cout<<"product "<<p2.code<<" is "<<p2.name<<endl;
    return 0;
}