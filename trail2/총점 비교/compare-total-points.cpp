#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student{
    public:
    string name; int score1, score2, score3;
    Student(string name, int score1, int score2, int score3){
        this->name=name;
        this->score1=score1;
        this->score2=score2;
        this->score3=score3;
    }
    Student(){};
};

bool cmp(Student a, Student b){
    return a.score1+a.score2+a.score3<b.score1+b.score2+b.score3;
}

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    Student student[N];

    string n; int s1, s2, s3;

    for(int i=0; i<N; i++){
        cin>>n>>s1>>s2>>s3;
        student[i]=Student(n, s1, s2, s3);
    }

    sort(student, student+N, cmp);

    for(int i=0; i<N; i++){
        cout<<student[i].name<<" "<<student[i].score1<<" "<<student[i].score2<<" "<<student[i].score3<<endl;
    }
    return 0;
}
