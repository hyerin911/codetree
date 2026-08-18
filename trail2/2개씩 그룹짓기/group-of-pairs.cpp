#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 1000

int main(){
    int n;
    cin>>n;

    int nums[2*MAX_N];

    for(int i=0; i<2*n; i++)
        cin>>nums[i];

    sort(nums, nums+2*n);

    int group_max=0;
    for(int i=0; i<n; i++){
        int group_sum=nums[i]+nums[2*n-1-i];
        if(group_sum>group_max)
            group_max=group_sum;
    }
    cout<<group_max<<"\n";

    return 0;
}