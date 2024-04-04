#include <iostream>
using namespace std;

int square(int n);      //declaration
int multiply(int a, int b);

int main(){
    cout<< endl;

    int n =5, m =10;

    cout<<square(n)<<endl;
    cout << multiply(n, m) <<endl;

    cout<<endl;    
}

int square(int n){
    int s  =n*n;
    return s;
}
int multiply(int a, int b){
    return a*b;
}