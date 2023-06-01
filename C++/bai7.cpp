/*
* File: bai7.cpp
* Author: LE QUANG VONG
* Date: 28/05/2023
* Description: Tạo một lớp ngày tháng năm với các thuộc tính ngày, tháng và năm, và
các phương thức để tính tuổi của người và kiểm tra xem một ngày nhất định có phải là ngày nghỉ lễ hay không.
*/

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

/*
* Function: Date
* Description: The class contains the methods and properties of the date.
*/

class Date {
    private:
        int day;
        int month;
        int year;
    public:
        Date(int d, int m, int y);
        int age();
        bool Check();
};

/**
     * Function: Constructor 
     * Description: enter initialization information
     * Input:
     * int d
     * int m
     * int y
     * Output:
     * none
    */ 

Date::Date(int d, int m, int y){
    Date::day = d;
    Date::month = m;
    Date::year = y;
}
/**
 * Function: age
 * Description: This function prints out the age of the person.
 * Input:
 *  None
 * Output:
 *  age 
*/

int Date::age(){
    int age = 2023 - Date::year;
    return age;
}

/**
 * Function: age
 * Description: This function compares whether the date is the same as a holiday date, if it is the same, it returns true, it does not return false
 * Input:
 *  None
 * Output:
 *  true,false
*/

bool Date::Check(){
    if((Date::day == 30 && Date::month == 4) || (Date::day == 1 && Date::month == 5) || (Date::day == 2 && Date::month == 9) || (Date::day == 1 && Date::month == 1)){
        return true;
    }else{
        return false;
    }
}

int main()
{
    Date a1 = Date(23,8,2015);
    cout << "so tuoi la: " << a1.age() << endl;
    cout << "co phai la ngay le hay khong: " << a1.Check() << endl;
    return 0;
}