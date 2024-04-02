#include <iostream>
using namespace std;

int main() {

    cout << endl;

    cout << "Unique Row \n";

    for (int r=1; r<=7; ++r){
        for( int c=1; c<=7; ++c){
            if (r==5)
            cout <<"X ";
        else
            cout << "* ";

        }
        cout <<"\n";
    }
cout <<"\n";

cout << "Coordinates (i,j)\n";
for (int r=1; r<=7; ++r){
        for( int c=1; c<=7; ++c){
            if (r==5)
            cout << r << "," << c << "  ";
        else
            cout << "...  ";

        }
        cout <<"\n";
    }
    return 0;
}