#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student{
    public:
    string name; int korean, English, math;
    Student(string name, int korean, int English, int math){
        this->name=name;
        this->korean=korean;
        this->English=English;
        this->math=math;
    }
    Student(){};  
};

bool Cmp(Student a, Student b){
    if(a.korean==b.korean){
        if(a.English==b.English){
            return a.math>b.math;
        }
        return a.English>b.English;
    }
    return a.korean>b.korean;
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    string namae; int k, e, m;

    Student student[n];

    for(int i=0; i<n; i++){
        cin>>namae>>k>>e>>m;
        student[i]=Student(namae, k, e, m);
    }

    sort(student, student+n, Cmp);

    for(int i=0; i<n; i++){
        cout<<student[i].name<<" "<<student[i].korean<<" "<<student[i].English<<" "<<student[i].math<<endl;
    }
    return 0;
}