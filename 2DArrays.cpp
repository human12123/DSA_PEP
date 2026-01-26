#include <iostream>
using namespace std;
int main(){
    int arr3D[3][2]={
       { 12,13},
       {24,25},
       {34,35}
    };

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<arr3D[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}