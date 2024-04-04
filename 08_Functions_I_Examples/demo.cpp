#include <iostream>
using namespace std;


int square(int n);

int main(){
    cout<< endl;

    int n=5;

cout<< &n<<endl;   //address of operator 
cout<<square(n)<<endl;
    cout<<endl;    
}

int square(int n){
    int s  =n*n;
    return s;
}