// simple binary search program use in c++ leanguage....
#include <iostream>
using namespace std;

int main(){
    int num[5], i, pos = -1, value;
    cout << "Enter your five number: ";
    for(i = 0; i < 5; i++){
        cin >> num[i];
    };

    cout << "Inter ther number you want to search in array: ";
    cin >> value;
    for(i = 0; i < 5; i++){
        if(value == num[i]){
            pos = i + 1;
            break;
        }
    }

    if(pos == -1){
        cout << "The element " << value << " opps we are not found" << endl;
        cout << "The position of " << value << " is : " << pos;
    }
    else{
        cout << "Yes, your search result we are found..." << endl;
        cout << "The position of " << value << " is : " << pos;
    }
}
