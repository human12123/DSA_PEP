#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5};

    //vec.erase(vec.begin()+1,vec.begin()+4);
    //vec.insert(vec.begin()+1,1000);
    //vec.clear();
    //cout<<vec.size()<<endl;
    //cout<<vec.capacity()<<endl;
    
    
    
    vec.clear();    
    for(int val : vec){
        cout<<val<<" ";
    }
}