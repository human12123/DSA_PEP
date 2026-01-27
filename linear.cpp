#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> names;
    names.push_back("Alice");
    names.push_back("Bob1");
    names.push_back("Charlie2");
    names.push_back("Diana3");
    int cnt = 0;
    for(string str:names){
        bool endsWithDigit = (str.back() >= '0' && str.back() <= '9');
        cnt+=endsWithDigit;
    }
    cout<<cnt<<endl;
    
return 0;
}