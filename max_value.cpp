// simple get user input an array and then this array within max value find out...
#include <iostream>
using namespace std;

int main() {
    int i, arr[10];
    cout << "Enter your 10 number: ";
    for(i = 0; i < 10; i++){
        cin >> arr[i];
    }

    int max_value = arr[0];
    for(i = 0; i < 10; i++){
        int element = arr[i];
        if(element > max_value){
            max_value = element;
        }
    }
    cout << "This value " << max_value << " is biggest in array";
}
