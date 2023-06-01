/*
* File: bai6.cpp
* Author: LE QUANG VONG
* Date: 28/05/2023
* Description: Tạo một lớp phân số với các thuộc tính tử số và mẫu số và các phương
thức để tính toán các phép tính toán cơ bản như cộng, trừ, nhân và chia.
*/

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

/*
* Function: Fraction
* Description: The class contains the methods and properties of the Fraction.
*/ 

class Fraction {
    private:
        int numerator;
        int denominator;
    public:
        Fraction(int ts, int ms);
        float Sum(Fraction ps1, Fraction ps2);
        float Sub(Fraction ps1, Fraction ps2);
        float Multi(Fraction ps1, Fraction ps2);
        float Div(Fraction ps1, Fraction ps2);
        int getDenominator();
        int getNumerator();
};

/**
     * Function: Constructor 
     * Description: enter initialization information
     * Input:
     * int ts
     * int ms
     * Output:
     * none
    */ 

Fraction::Fraction(int ts = 0, int ms = 0){
    Fraction::numerator = ts;
    Fraction::denominator = ms;
}

int Fraction::getNumerator(){
    return Fraction::numerator;
}

int Fraction::getDenominator(){
    return Fraction::denominator;
}

/**
 * Function: Sum
 * Description: This function calculates the sum of two fractions that have the same denominator and different denominators
 * Input: 
 *    ps1 ps2
 * Output:
 *    sum
*/

float Fraction::Sum(Fraction ps1, Fraction ps2){
    if(ps1.denominator != ps2.denominator)
    {
        int ts = ps1.numerator*ps2.denominator + ps1.denominator*ps2.numerator;
        int ms = ps1.denominator*ps2.denominator;
        float sum = ts/ms;
        return sum;
    }else{
        int ts = ps1.numerator + ps2.numerator;
        int ms = ps1.denominator;
        float sum = ts/ms;
        return sum;
    }
}

/**
 * Function: Sub
 * Description: This function calculates the difference of two fractions with the same denominator and different denominators
 * Input: 
 *    ps1 ps2
 * Output:
 *    Sub
*/

float Fraction::Sub(Fraction ps1, Fraction ps2){
    if(ps1.denominator != ps2.denominator)
    {
        int ts = ps1.numerator*ps2.denominator - ps1.denominator*ps2.numerator;
        int ms = ps1.denominator*ps2.denominator;
        float Sub = ts/ms;
        return Sub;
    }else{
        int ts = ps1.numerator - ps2.numerator;
        int ms = ps1.denominator;
        float Sub = ts/ms;
        return Sub;
    }
}

/**
 * Function: Multi
 * Description: This function calculates the product of two fractions
 * Input: 
 *    ps1 ps2
 * Output:
 *    Multi
*/

float Fraction::Multi(Fraction ps1, Fraction ps2){
    int ts = ps1.numerator*ps2.numerator;
    int ms = ps1.denominator*ps2.denominator;
    float Multi = ts/ms;
    return Multi;
}

/**
 * Function: Div
 * Description: This function calculates the quotient of two fractions
 * Input: 
 *    ps1 ps2
 * Output:
 *    Div
*/ 

float Fraction::Div(Fraction ps1, Fraction ps2){
    int ts = ps1.numerator*ps2.denominator;
    int ms = ps1.denominator *ps2.numerator;
    float Div = ts/ms;
    return Div;
}

int main()
{
    Fraction a1(3,4);
    Fraction a2(5,6);
    Fraction a;
    cout << a1.getNumerator()<< "/" << a1.getDenominator() << " + " << a2.getNumerator() << "/" << a2.getDenominator() << " la: " << a.Sum(a1,a2) << endl;
    cout << a1.getNumerator()<< "/" << a1.getDenominator() << " - " << a2.getNumerator() << "/" << a2.getDenominator() << " la: " << a.Sub(a1,a2) << endl;
    cout << a1.getNumerator()<< "/" << a1.getDenominator() << " * " << a2.getNumerator() << "/" << a2.getDenominator() << " la: " << a.Multi(a1,a2) << endl;
    cout << "(" << a1.getNumerator()<< "/" << a1.getDenominator() <<")" << " / " << "(" << a2.getNumerator() << "/" << a2.getDenominator() << ")" << " la: " << a.Div(a1,a2) << endl;
    return 0;
}