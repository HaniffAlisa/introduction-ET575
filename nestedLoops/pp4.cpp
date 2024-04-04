#include<iostream>
using namespace std;

int main(){

    cout<<endl;

    const int DIM = 8;

    for(int i=1; i<=DIM; ++i ){
        for(int j=1; j<=DIM; ++j){
            if((j==DIM-i+1) || (j==i)){
                cout<<"X ";
            
            }
            else{
                cout<<"O ";
            }
        }cout<<"\n";
    }

    return 0;
}