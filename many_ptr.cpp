#include<iostream>
using namespace std;
int main(){
    string* p1=new string("Sumit");
    string**  p2=&p1;
    string*** p3=&p2;
    cout<<***p3<<endl;


    
    return 0;
}