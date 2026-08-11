#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N, M;
    cin>>N>>M;

    int index1[N][M];
    int index2[N][M];
    int index3[N][M];

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>index1[i][j];
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>index2[i][j];
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(index1[i][j]==index2[i][j]){
                index3[i][j]=0;
            }
            else{
                index3[i][j]=1;
            }
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout<<index3[i][j]<<" ";
        }
        cout<<"\n";
    }

}