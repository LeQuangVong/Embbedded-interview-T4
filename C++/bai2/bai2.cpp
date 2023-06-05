/*
* File: bai2.cpp
* Author: LE QUANG VONG
* Date: 28/05/2023
* Description: Tạo một lớp hình chữ nhật với các thuộc tính chiều dài, chiều rộng và
              các phương thức để tính chu vi, diện tích, đường chéo và kiểm tra xem
              nó có phải là hình vuông hay không.
*/
#include<iostream>
#include<cmath>
using namespace std;

/*
* Function: class Rectangle
* Description: The class contains the methods and properties of the rectangle.
*/ 

class Rectangle {
    private:
        int Length;
        int Width;
    public:
    Rectangle(int l, int w);//Constructor
    int P_Rectangle();
    int A_Rectangle();
    float Diagonal_line();
    bool Check();
};

/**
     * Function: Constructor 
     * Description: enter initialization information
     * Input:
     * - int l
     * - int w
     * Output:
     * none
    */ 

Rectangle::Rectangle(int l, int w){
    Rectangle::Length = l;
    Rectangle::Width = w;
}

/**
 * Function: P_Rectangle
 * Description: This function calculates the perimeter of the rectangle.
 * Input:
 *    None
 * Output:
 *    P_Rectangle
*/

int Rectangle::P_Rectangle(){
    int P_Rectangle = (Rectangle::Length * Rectangle::Width)*2;
    return P_Rectangle;
}

/**
 * Function: A_Rectangle
 * Description: This function calculates the area of ​​the rectangle
 * Input:
 *    None
 * Output:
 *    A_Rectangle
*/ 

int Rectangle::A_Rectangle(){
    int A_Rectangle = Rectangle::Length * Rectangle::Width;
    return A_Rectangle;
}

/**
 * Function: Diagonal_line
 * Description: This function calculates the diagonal of the rectangle
 * Input:
 *    None
 * Output:
 *    Diagonal_line
*/

float Rectangle::Diagonal_line(){
    int Diagonal_line = sqrt(Rectangle::Length * Rectangle::Length + Rectangle::Width * Rectangle::Width);
    return Diagonal_line;
}

/**
 * Function: Check
 * Description: This function checks if it is a square, if it is, returns true, not false
 * Input:
 *    None
 * Output:
 *    true, false
*/

bool Rectangle::Check(){
    if(Rectangle::Length == Rectangle::Width){
        return true;
    }else{
        return false;
    }
}

int main()
{
    Rectangle Rectangle(10,15);
    cout << "chu vi hinh chu nhat la: " << Rectangle.P_Rectangle() << endl;
    cout << "dien tich hinh chu nhat la: " << Rectangle.A_Rectangle() << endl;
    cout << "duong cheo hinh chu nhat la: " << Rectangle.Diagonal_line() << endl;
    cout << "hinh nay co phai hinh vuong khong : " << Rectangle.Check() << endl;
    return 0;
}