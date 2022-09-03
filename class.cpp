// simple class defind in program..
#include <iostream>
using namespace std;

class Habib{
    public: int display(int x, int y, int z){
        cout << "Hello world" << endl;
        int sum = x + y + z;
        cout << "Total sum is: ";
        return (sum);
        //cout << "Total sum is: " << sum << endl;
    }

    public: void message(string text){
        cout << "Hello habib" << endl;
        cout << text << endl;
    }

    public: void car(string model, string color, int price){
        cout << "This is my care" << endl;
        cout << model << endl;
        cout << color << endl;
        cout << price;
    }
};

int main (){
    Habib name, sms, my_car;
    cout << name.display(30, 45, 53)  << endl;
    sms.message("How are you c++ developer!");
    my_car.car("BMW-Series 7", "Gray", 18500000);

    return 0;
}
