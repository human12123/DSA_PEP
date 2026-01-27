#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,3,33,3,3,4,5,2,2, 3, 5, 7, 9, 11, 13, 15};
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int minIdx=i;
    

    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minIdx]){
            minIdx=j;
        }
    } 

    swap(arr[i],arr[minIdx]);
}
for(int val:arr)
cout<<val<<" ";
    return 0;
}