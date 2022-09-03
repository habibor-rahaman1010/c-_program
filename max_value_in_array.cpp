//find out max valu in array....
#include <iostream>
using namespace std;

int main(){
     int arr[10] = {23, 45, 56, 45, 123, 45, 67, 54, 67, 80};
     int max_arr = arr[0];
     int i;
     for(i = 0; i < 10; i++){
        int element = arr[i];
        if(element > max_arr){
            max_arr = element;
        }
     }
    cout << max_arr;
    return 0;
}
