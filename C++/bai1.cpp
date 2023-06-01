/*
* File: bai1.cpp
* Author: LE QUANG VONG
* Date: 28/05/2023
* Description:  Tạo một lớp điểm trong hệ tọa độ 2D và viết các phương thức để tính
                khoảng cách giữa hai điểm, tính diện tích của tam giác được tạo bởi ba điểm.
*/

#include <iostream>
#include <cmath>
using namespace std;

/*
* Function: class Point
* Description: The class contains the methods and properties of the Point.
*/ 

class Point {
    private:
        int X;
        int Y;
    public:
        Point(int x, int y);
        int getX();
        int getY();
};

/**
* Function: Constructor 
 * Description: enter initialization information
 * Input:
 * - int x
 * - int y
 * Output:
 * none
*/   

Point::Point(int x = 0, int y = 0){
    Point::X = x;
    Point::Y = y;
}

/*
 * Function: getY
 * Description: A method of class Point
 * Input:
 *    None
 * Output:
 *    Y
*/

int Point::getY()
{
    return Point::Y;
}

/*
 * Function: getX
 * Description: A method of class Point
 * Input:
 *    None
 * Output:
 *    X
*/

int Point::getX()
{
    return Point::X;
}

/*
* Function: class distance_2p
* Description: The class contains the methods and properties of the distance 2 point.
*/ 

class distance_2p {
    public:
        Point A;
        Point B;
        double distance(Point A, Point  B);
};

/*
 * Function: distance
 * Description: A method of class distance_2p, This function calculates the distance between 2 points
 * Input:
 *    None
 * Output:
 *    distance
*/

double distance_2p::distance(Point A, Point B){    
    return sqrt((B.getX()-A.getX())*(B.getX()-A.getX())+(B.getY()-A.getY())*(B.getY()-A.getY()));
}

/*
* Function: class S_triangle
* Description: The class contains the methods and properties of the triangle.
*/

class S_triangle {
    public:
        Point C;
        Point D;
        Point E;
        double S_triangle1(Point C, Point D, Point E);
};

/*
 * Function: S_triangle1
 * Description: A method of class S_triangle, This function calculates the area of ​​triangle formed by 3 points.
 * Input:
 *    None
 * Output:
 *    S triangle 
*/

double S_triangle::S_triangle1(Point C, Point D, Point E){
    
    return 0.5*(abs(D.getX()-C.getX())*(E.getY()-C.getY())-(E.getX()-C.getX())*(D.getY()-C.getY()));  
}

int main()
{
    distance_2p p;
    S_triangle s;
    Point p1(1,2);
    Point p2(3,4);
    Point p3(5,6);
    cout << "khoang cach 2 diem la: " << p.distance(p1,p2) << endl;
    cout << "dien tich tam giac la: " << s.S_triangle1(p1,p2,p3) << endl;
    return 0;
}