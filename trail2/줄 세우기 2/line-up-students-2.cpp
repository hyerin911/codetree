#include <iostream>
#include <algorithm>

using namespace std;

class Student{
    public:
    string std; int height, weight, num;
    Student(int height, int weight, int num){
        this->height=height;
        this->weight=weight;
        this->num=num;
    }
    Student(){};
};

bool cmp(Student a, Student b){
    if(a.height==b.height)
        return a.weight>b.weight;
    return a.height<b.height;
}

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    Student student[N];


    int h, w;

    for(int i=0; i<N; i++){
        cin>>h>>w;
        student[i]=Student(h, w, i+1);
    }

    sort(student, student+N, cmp);

    for(int i=0; i<N; i++){
        cout<<student[i].height<<" "<<student[i].weight<<" "<<student[i].num<<endl;
    }

    return 0;
}