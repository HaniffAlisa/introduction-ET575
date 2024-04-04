#include <iostream>
using namespace std;


int square(int n);

int main(){
    cout<< endl;

    int x=5;


    cout<<square(x)<<endl;
    cout<<endl;    
}

int square(int n){
    int s  =n*n;
    return s;
}

