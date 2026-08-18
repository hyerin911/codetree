#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student{
    public:
    int height, weight, number;
    Student(int height, int weight, int number){
        this->height=height;
        this->weight=weight;
        this->number=number;
    }
    Student(){};
};

bool cmp(Student a, Student b){
    if(a.height==b.height){
        if(a.weight==b.weight){
            return a.number<b.number;
        }
        return a.weight>b.weight;
    }
    return a.height>b.height;
}

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    Student student[N];

    int H, W, n;
    int num=1;

    for(int i=0; i<N; i++){
        cin>>H>>W;
        student[i]=Student(H, W, num);
        num++;
    }

    sort(student, student+N, cmp);

    for(int i=0; i<N; i++){
        cout<<student[i].height<<" "<<student[i].weight<<" "<<student[i].number<<endl;
    }
    return 0;
}