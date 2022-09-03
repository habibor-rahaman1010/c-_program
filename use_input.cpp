
//find out an big number form an array...form user by input
#include <iostream>
using namespace std;

int main(){
    int x[5];
    int i;

    cout << "Enter your input: ";
    for(i = 0; i < 5; i+=1){
        cin >> x[i];
    }

    int max_value = x[0];
    for(i = 1; i < 5; i+=1){
        if(x[i] > max_value)
            max_value = x[i];
    }
    cout << max_value;
    return 0;
}
