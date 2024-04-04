#include<iostream>
using namespace std;

int main(){

    cout<<endl;

    const int DIM = 8;

    for(int i=8; i<=1; --i ){
        for(int j=8; i<=1; --i){
            if(i==j){
                cout<<"X "<<endl;
            
            }else{
                cout<<"O ";
            }
        }cout<<"\n";
    }

    return 0;
}