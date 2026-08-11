#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    int matrix[N][N];

    for(int i=0; i<N; i++){
        int cnt=1;
        if(i%2==0){
            for(int j=0; j<N; j++){
                matrix[j][i]=cnt;
                cnt++;
            }
        }
        else{
            for(int j=N-1; j>=0; j--){
                matrix[j][i]=cnt;
                cnt++;
            }
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<matrix[i][j];
        }
        cout<<"\n";
    }

    return 0;
}