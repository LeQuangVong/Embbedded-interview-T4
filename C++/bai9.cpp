/*
* File: bai9.cpp
* Author: LE QUANG VONG
* Date: 28/05/2023
* Description: Tạo một lớp xe hơi với các thuộc tính màu sắc, kiểu động cơ và số km
đã đi, và các phương thức để tính toán chi phí bảo trì, kiểm tra số km đã đi và in thông tin về xe.
*/

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

/*
* Function: Car
* Description: The class contains the methods and properties of the car.
*/

class Car {
    private:
        string color;
        string type;
        int s;
    public:
        Car(string _color, string _type, int _s);
        int repair_cost();
        void check_km();
        void info_car();
};

/**
     * Function: Constructor 
     * Description: enter initialization information
     * Input:
     * string _color
     * string _type
     * int _s
     * Output:
     * none
    */ 

Car::Car(string _color, string _type, int _s){
    Car::color = _color;
    Car::type = _type;
    Car::s = _s;
}

/**
 * Function: repair_cost
 * Description: This function calculates the vehicle maintenance price according to the kilometers traveled
 * Input:
 * None
 * Output:
 * repair cost
*/

int Car::repair_cost(){
    if(Car::s > 3000){
        return 3000;
    }else{
        return 2000;
    }
}

/**
 * Function: check_km
 * Description: This function checks the number of kilometers traveled
 * Input:
 * None
 * Output:
 * kilometers traveled
*/

void Car::check_km(){
    cout << "the number of kilometers traveled: " << Car::s << endl;
}

/**
 * Function: info_car
 * Description: This function displays information about the vehicle
 * Input:
 * None
 * Output:
 * information about the vehicle
*/

void Car::info_car(){
    cout << "color of car: " << Car::color << endl;
    cout << "the number of kilometers traveled: " << Car::s << endl;
    cout << "engine type: " << Car::type << endl;
}

int main(){
    Car a1("Red","VIP",4000);
    cout << "chi phi bao tri xe la: " << a1.repair_cost() << endl;
    a1.check_km();
    a1.info_car();
    return 0;
}