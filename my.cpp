#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    x = 45;
    y = 23;
    z = 53;
    if(x > y && x > z){
        cout << "largest number is: " << x << endl;
    }
    else if(x < y && x < z){
        cout << "largest number is: " << y << endl;
    }
    else{
        cout << "largest number is: " << z << endl;
    }

   return 0;
}
