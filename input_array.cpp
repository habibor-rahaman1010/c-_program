// simple get user input array and then this array print out...
#include <iostream>
using namespace std;

int main() {
    int i, arr[10];
    cout << "Enter your 10 number: ";
    for(i = 0; i < 10; i++){
        cin >> arr[i];
    }

     cout << "This is print user array";
     for(i = 0; i < 10; i++){
            cout << arr[i] << endl;
    }
}
