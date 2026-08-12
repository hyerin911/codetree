#include <iostream>
using namespace std;

void add(int a, int c){
    cout<<a<<" + "<<c<<" = "<<a+c;
}

void mi(int a, int c){
    cout<<a<<" - "<<c<<" = "<<a-c;
}

void divide(int a, int c){
    cout<<a<<" / "<<c<<" = "<<a/c;
}

void multiply(int a, int c){
    cout<<a<<" * "<<c<<" = "<<a*c;
}

int main() {
    // Please write your code here.
    int a, c;
    char o;

    cin>>a>>o>>c;

    if(o=='+'){
        add(a, c);
    }
    else if(o=='-'){
        mi(a, c);
    }
    else if(o=='/'){
        divide(a, c);
    }
    else if(o=='*'){
        multiply(a, c);
    }
    else{
        cout<<"False";
    }

    return 0;
}