// (c) S. Trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    cout << "3 row x 4 column image: \n\n";

    for(int r=1; r<=3; ++r) {        // print three rows (0,1,2)
        for(int c=0; c<4; ++c) {    // print four columns (0,1,2,3)
            cout << "* ";
        }
        cout << "\n";
    }
cout << "Coordinates (i,j) \n";
for (int r=1; r<=3; ++r) {
    for(int c=1; c<=4; ++c){
    cout << r << "," << c << "  ";
}
cout << "\n";
}
    cout << endl;
    return 0;
}