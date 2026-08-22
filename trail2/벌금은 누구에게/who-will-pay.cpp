#include <iostream>

using namespace std;

int N, M, K;
int student[10000];
int fine[101];

int main() {
    cin >> N >> M >> K;

    for (int i = 0; i < M; i++)
        cin >> student[i];

    for(int i=0; i<M; i++){
        fine[student[i]]+=1;
        if(fine[student[i]]==K){
            cout<<student[i];
            break;
        }
        else if(i==M-1){
            cout<<-1;
        }
    }

    return 0;
}