/*
* File: bai3.cpp
* Author: LE QUANG VONG
* Date: 28/05/2023
* Description: Tạo một lớp hình tròn với bán kính và các phương thức để tính chu vi
và diện tích của hình tròn.
*/

#include<iostream>
#include<cmath>
using namespace std;

/*
* Function: Circle
* Description: The class contains the methods and properties of the circle.
*/ 

class Circle {
    private:
        float Radius;
        const float PI = 3.14;
    public:
        Circle(float r);
        float P_Circle();
        float A_Circle();
};

/**
     * Function: Constructor 
     * Description: enter initialization information
     * Input:
     * float r
     * 
     * Output:
     * none
    */ 
Circle::Circle(float r){
    Circle::Radius = r;
}

/**
 * Function: P_Circle
 * Description: This function calculates the perimeter of the Circle.
 * Input:
 *    None
 * Output:
 *    P_Circle
*/

float Circle::P_Circle(){
    float P_Circle = 2*Circle::Radius*Circle::PI;
    return P_Circle;
}

/**
 * Function: A_Circle
 * Description: This function calculates the area of the Circle.
 * Input:
 *    None
 * Output:
 *    A_Circle
*/

float Circle::A_Circle(){
    float A_Circle = Circle::Radius * Circle::Radius * Circle::PI;
    return A_Circle;
}

int main()
{
    Circle Circle(5);
    cout << "Chu vi hinh tron la: " << Circle.P_Circle() << endl;
    cout << "Dien tich hinh tron la: " << Circle.A_Circle() << endl;
    return 0;
}