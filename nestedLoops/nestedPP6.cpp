#include<iostream>
using namespace std;

int main(){

    cout<<endl;

    const int DIM = 8;

    for(int i=1; i<=DIM; ++i ){
        for(int j=1; j<=DIM; ++j){
            if((i>=DIM/2+1) && (j==i || j==DIM-i+1)){
                cout<<"X ";
            
            }else {
                cout<<"O ";
            }
        }cout<<"\n";
    }

    return 0;
}