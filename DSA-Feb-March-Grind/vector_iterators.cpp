#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={10,20,30,40,50};
    vector<int>::reverse_iterator rit;
    for(auto it=vec.rbegin();it!=vec.rend();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    return 0;
}


class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int i = 0, j = arr.size() - 1;
        while (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
};


#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& arr) {
    int maxi = arr[0];           // assume first element is largest
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxi)
            maxi = arr[i];       // update if larger found
    }
    return maxi;
}

int main() {
    vector<int> arr = {1, 8, 7, 56, 90};
    cout << largestElement(arr);
    return 0;
}










class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int largest = arr[0];

        // 1st pass: find largest
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > largest)
                largest = arr[i];
        }

        int second = -1;

        // 2nd pass: find second largest
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] < largest && arr[i] > second)
                second = arr[i];
        }

        return second;
    }
};
