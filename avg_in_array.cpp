// simple get user input an array and then this array will do avarage...
#include <iostream>
using namespace std;

int main() {
    int i, arr[10];
    cout << "Enter your 10 number: ";
    for(i = 0; i < 10; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for(i = 0; i < 10; i++){
        int element = arr[i];
        sum += element;
    }
    int avg = sum / 10;
    cout << "Avarage valu is: " << avg;
}

