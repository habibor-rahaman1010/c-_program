#include <iostream>
using namespace std;

int main(){
    int x[10] = {23, 45, 56, 45, 23, 45, 67, 54, 67, 80};
    int arrSum = 0;
    for(int i = 0; i < 10; i++){
        arrSum += x[i];
    }
    cout << "Total array summation is: " << arrSum;
    return 0;
}
