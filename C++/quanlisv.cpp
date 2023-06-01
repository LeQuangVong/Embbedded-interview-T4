/*
* File: quanlisv.cpp
* Author: LE QUANG VONG
* Date: 28/05/2023
* Description: This is a student management program
*/

#include<stdio.h>
#include<iostream>
#include<string>
#include<stdio.h>
#include<vector>   
#include<stdint.h> 
#include<iomanip>
#include <algorithm>
using namespace std;

/*
* Function: GIOI_TINH, HOCLUC
* Description: typedef used for default list for data type
*/

typedef enum {
    Male,
    Female
}GIOI_TINH;

typedef enum {
    GIOI,
    KHA,
    TRUNG_BINH,
    YEU
}HOCLUC;

/*
* Function: class Sinhvien
* Description: The class contains the methods and properties of the students.
*/ 

class Sinhvien {
    private:
        int ID;
        string name;
        int age;
        GIOI_TINH sex;
        float DIEM_TOAN;
        float DIEM_LY;
        float DIEM_HOA;
        float DIEM_TB;
    public:
    Sinhvien(string _name, GIOI_TINH _sex, float _DIEM_TOAN, float _DIEM_LY, float _DIEM_HOA, float DIEM_TB);
    int getID();
    void setName(string name);
    string getName();
    void setSex(GIOI_TINH gt);
    string getSex();
    void setAge(int age);
    int getAge();
    void setDiemToan(float toan);
    float getDiemToan();
    void setDiemLy(float ly);
    float getDiemLy();
    void setDiemHoa(float hoa);
    float getDiemHoa();
    float getDiemTrungBinh();
    HOCLUC getHocLuc();
};

/**
     * Function: Constructor 
     * Description: enter initialization information
     * Input:
     * string _name, GIOI_TINH _sex, float _DIEM_TOAN, float _DIEM_LY, float _DIEM_HOA, float _DIEM_TB
     * Output:
     * none
    */ 

Sinhvien::Sinhvien(string _name = "NONE", GIOI_TINH _sex = Male, float _DIEM_TOAN = 0, float _DIEM_LY = 0, float _DIEM_HOA = 0, float _DIEM_TB = 0){
    static int id = 1;
    Sinhvien::ID = id;
    id++;
    Sinhvien::sex = _sex;
    Sinhvien::name = _name;
    Sinhvien::DIEM_TOAN = _DIEM_TOAN;
    Sinhvien::DIEM_HOA = _DIEM_HOA;
    Sinhvien::DIEM_LY = _DIEM_LY;
    Sinhvien::DIEM_TB = _DIEM_TB;
}

/*
 * Function: getID
 * Description: A method of class SinhVien
 * Input:
 *    None
 * Output:
 *    ID student
*/

int Sinhvien::getID(){
    return this->ID;
}

/*
 * Function: setName
 * Description: A method of class SinhVien
 * Input:
 *    name students
 * Output:
 *    none
*/

void Sinhvien::setName(string name){
    this->name = name;
}

/*
 * Function: getName
 * Description: A method of class SinhVien
 * Input:
 *    None
 * Output:
 *    name student
*/

string Sinhvien::getName(){
    return this->name;
}

/*
 * Function: setSex
 * Description: A method of class SinhVien
 * Input:
 *    sex of students
 * Output:
 *    none
*/

void Sinhvien::setSex(GIOI_TINH gt){
    this->sex = gt;
}

/*
 * Function: getSex
 * Description: A method of class SinhVien
 * Input:
 *    None
 * Output:
 *    sex of student: Male or Female
*/

string Sinhvien::getSex(){
    string temp = Sinhvien::sex == Male ? "Male" : "Female";
    return temp;
}

/*
 * Function: setAge
 * Description: A method of class SinhVien
 * Input:
 *    age of students
 * Output:
 *    none
*/

void Sinhvien::setAge(int age){
    this -> age = age;
}

/*
 * Function: getAge
 * Description: A method of class SinhVien
 * Input:
 *    None
 * Output:
 *    age of student
*/

int Sinhvien::getAge(){
    return Sinhvien::age;
}

/*
 * Function: setDiemToan
 * Description: A method of class SinhVien
 * Input:
 *    score of students
 * Output:
 *    none
*/

void Sinhvien::setDiemToan(float toan){
    this->DIEM_TOAN = toan;
}

/*
 * Function: getDiemToan
 * Description: A method of class SinhVien
 * Input:
 *    None
 * Output:
 *    score of student
*/

float Sinhvien::getDiemToan(){
    return Sinhvien::DIEM_TOAN;
}

/*
 * Function: setDiemHoa
 * Description: A method of class SinhVien
 * Input:
 *    score of students
 * Output:
 *    none
*/

void Sinhvien::setDiemHoa(float hoa){
    this->DIEM_HOA = hoa;
}

/*
 * Function: getDiemHoa
 * Description: A method of class SinhVien
 * Input:
 *    None
 * Output:
 *    score of student
*/

float Sinhvien::getDiemHoa(){
    return Sinhvien::DIEM_HOA;
}

/*
 * Function: setDiemLy
 * Description: A method of class SinhVien
 * Input:
 *    score of students
 * Output:
 *    none
*/

void Sinhvien::setDiemLy(float ly){
    this->DIEM_LY = ly;
}

/*
 * Function: getDiemLy
 * Description: A method of class SinhVien
 * Input:
 *    None
 * Output:
 *    score of student
*/

float Sinhvien::getDiemLy(){
    return Sinhvien::DIEM_LY;
}

/*
 * Function: getDiemTrungBinh
 * Description: A method of class SinhVien, equal to the average of the scores of math, physics, chemistry
 * Input:
 *    None
 * Output:
 *    score TB of student
*/

float Sinhvien::getDiemTrungBinh(){
    return Sinhvien::DIEM_TB = (Sinhvien::DIEM_TOAN + Sinhvien::DIEM_HOA + Sinhvien::DIEM_LY)/3;
}

/*
 * Function: getHocLuc
 * Description: A method of class SinhVien, compare the grade point average with the levels available for grading students
 * Input:
 *    score TB of student
 * Output:
 *    student ratings
*/

HOCLUC Sinhvien::getHocLuc(){
    float diemTb = Sinhvien::getDiemTrungBinh();
    if(diemTb >= 8){
        return GIOI;
    }else if(diemTb < 8 && diemTb >= 6.5){
        return KHA;
    }else if(diemTb < 6.5 && diemTb >= 5){
        return TRUNG_BINH;
    }else{
        return YEU;
    }
}

/*
* Function: class Menu
* Description: The class contains the methods and properties of the Menu.
*/ 

class Menu {
    private:
        vector<Sinhvien> Database;
    public:
        Menu();
        void addSinhvien();
        void updateSinhvienByID();
        void removeSinhvienByID();
        void searchSinhvienByName();
        void sortListSinhvienByGPA();
        void sortListSinhvienByName();
        void showListSinhvien();
        void swap(Sinhvien &sv1, Sinhvien &sv2);
};

/**
     * Function: Constructor 
     * Description: used to let the user select the student management function 
     * with the switch ... case command and select it again with the do ... while . command
     * Input:
     * None
     * Output:
     * none
    */ 

Menu::Menu(){
    int phim = 0;
    do{
        cout << "Xin moi lua chon chuc nang: "<< endl;
        cout << "1. Them sinh viên: "<< endl;
        cout << "2. Cap nhat thong tin sinh vien theo ID "<< endl;
        cout << "3. Xoa sinh vien theo ID "<< endl;
        cout << "4. Tim kiem sinh vien theo ten "<< endl;
        cout << "5. Sap xep sinh vien theo diem trung binh GPA "<< endl;
        cout << "6. Sap xep sinh vien theo ten "<< endl;
        cout << "7. Hien thi danh sach sinh vien "<< endl;
        cin >> phim;
    }while(phim < 1 || phim > 7);
    
    switch (phim)
    {
    case 1:
        addSinhvien();
        break;
    case 2:
        updateSinhvienByID();
        break;
    case 3:
        removeSinhvienByID();
        break;
    case 4:
        searchSinhvienByName();
        break;
    case 5:
        sortListSinhvienByGPA();
        break;
    case 6:
        sortListSinhvienByName();;
        break;
    case 7:
        showListSinhvien();
        break;
    default:
        break;
    }
}

/*
 * Function: addSinhvien
 * Description: A method of class Menu, This function is used to enter student information and save it to the database
 * Input:
 *    student information
 * Output:
 *    database
*/

void Menu::addSinhvien(){
    cout<<"Dien thong tin sinh vien"<<endl;
    string s_ten;
    string s_gioiTinh;
    int s_age;
    float diemToan;
    float diemLy;
    float diemHoa;
    cout << "Nhap ten : "<<endl;
    cin >> s_ten;
    do{
        cout << "Nhap gioi tinh(Male/Female): "<<endl;
        cin >> s_gioiTinh;
    }while(s_gioiTinh != "Male" && s_gioiTinh != "Female");

    do{
        cout << "Nhap tuoi (7 < tuoi <= 30): "<<endl;
        cin >> s_age;
    }while(s_age < 7 || s_age > 30);

    do{
        cout << "Nhap diem Toan: "<<endl;
        cin >> diemToan;
    }while(diemToan < 0 || diemToan > 10);

    do{
        cout << "Nhap diem Hoa: "<<endl;
        cin >> diemHoa;
    }while(diemHoa < 0 || diemHoa > 10);

    do{
        cout << "Nhap diem Ly: "<<endl;
        cin >> diemLy;
    }while(diemLy < 0 || diemLy > 10);
    Sinhvien sv(s_ten, s_gioiTinh, s_age, diemToan, diemLy, diemHoa);
    Menu::Database.push_back(sv);
}

/*
 * Function: updateSinhvienByID
 * Description: A method of class Menu, This function is used to update student information by entering student ID
 * Input:
 *    ID of students
 * Output:
 *    Information has been modified
*/

void Menu::updateSinhvienByID(){
    int id;
    cout << "Nhap ID sinh vien can update: " << endl;
    cin >> id;
    for(int i=0; i<Database.size();i++){
        if(Database[i].getID() == id){
            string s_ten;
            string s_gioiTinh;
            GIOI_TINH gioitinh;
            int s_age;
            float diemToan;
            float diemLy;
            float diemHoa;
            cout << "Nhap ten : "<<endl;
            cin >> s_ten;
            Database[i].setName(s_ten);
            do{
                cout << "Nhap gioi tinh(Male/Female): "<<endl;
                cin >> s_gioiTinh;
            }while(s_gioiTinh != "Male" && s_gioiTinh != "Female");
            if(s_gioiTinh == "Male"){
                gioitinh = Male;
            }else if(s_gioiTinh == "Female"){
                gioitinh == Female;
            };

            Database[i].setSex(gioitinh);
            do{
                cout << "Nhap tuoi (7 < tuoi <= 30): "<<endl;
                cin >> s_age;
            }while(s_age < 7 || s_age > 30);
            Database[i].setAge(s_age);
            do{
                cout << "Nhap diem Toan: "<<endl;
                cin >> diemToan;
            }while(diemToan < 0 || diemToan > 10);
            Database[i].setDiemToan(diemToan);
            do{
                cout << "Nhap diem Hoa: "<<endl;
                cin >> diemHoa;
            }while(diemHoa < 0 || diemHoa > 10);
            Database[i].setDiemHoa(diemHoa);
            do{
                cout << "Nhap diem Ly: "<<endl;
                cin >> diemLy;
            }while(diemLy < 0 || diemLy > 10);
            Database[i].setDiemLy(diemLy); 

        }
    }

}

/*
 * Function: removeSinhvienByID
 * Description: A method of class Menu, This function is used to delete student information by ID.
 * Input:
 *    ID of students
 * Output:
 *   new student list
*/

void Menu::removeSinhvienByID(){
    int delID;
    cout << "Nhap ID sinh vien can xoa: " << endl;
    cin >> delID;
    //Sinhvien sv;
    for(Sinhvien &sv:Database){
        if(sv.getID() == delID){
            Menu::Database.erase(Database.begin()+delID - 1);
        }
    }
}

/*
 * Function: searchSinhvienByName
 * Description: A method of class Menu, This function is used to search for student information with the student's name
 * Input:
 *    name of students
 * Output:
 *   information students.
*/

void Menu::searchSinhvienByName(){
    string s_ten;
    //Sinhvien sv;
    cout << "Nhap ten sinh vien can tim kiem" << endl;
    cin >> s_ten;
    for (Sinhvien sv:Database){
        if(sv.getName() == s_ten){
            cout << sv.getAge() << endl;
            cout << sv.getID() << endl;
            cout << sv.getSex() << endl;
            cout << sv.getDiemHoa() << endl;
            cout << sv.getDiemToan() << endl;
            cout << sv.getDiemLy() << endl;
        }
    }
}

/*
 * Function: swap
 * Description: A method of class Menu, This function is used to swap positions of 2 students.
 * Input:
 *   students
 * Output:
 *   None
*/

void Menu::swap(Sinhvien &sv1, Sinhvien &sv2){
    Sinhvien sv = sv1;
    sv1 = sv2;
    sv2 = sv;
}

/*
 * Function: sortListSinhvienByName
 * Description: A method of class Menu, This function allows two loops to run in a nest
 * and uses the swap function to swap the positions of the i-th and j-th names
 * Input:
 *   none
 * Output:
 *   None
*/

void Menu::sortListSinhvienByName(){
    for(int i = 0; i < Database.size(); i++){
        for(int j=i+1; j < Database.size(); j++){
            if(Database[i].getName()>Database[j].getName()){
                Menu::swap(Database[i].getName(),Database[j].getName());
            }
        }
    }
}

/*
 * Function: sortListSinhvienByGPA
 * Description: A method of class Menu, This function allows two loops to run in a nest
 * and uses the swap function to swap the positions of the i-th and j-th names
 * Input:
 *   none
 * Output:
 *   None
*/

void Menu::sortListSinhvienByGPA(){
    for(int i = 0; i < Database.size(); i++){
        for(int j=i+1; j < Database.size(); j++){
            if(Database[i].getDiemTrungBinh()>Database[j].getDiemTrungBinh()){
                Menu::swap(Database[i].getDiemTrungBinh(),Database[j].getDiemTrungBinh());
            }
        }
    }
}

/*
 * Function: showListSinhvien
 * Description: A method of class Menu, This function displays all student information in the database
 * Input:
 *   none
 * Output:
 *   information students
*/

void Menu::showListSinhvien(){
    cout << "Danh sanh sinh vien:" << endl;
    for(Sinhvien sv:Database){
        cout << sv.getAge() << endl;
        cout << sv.getID() << endl;
        cout << sv.getSex() << endl;
        cout << sv.getDiemHoa() << endl;
        cout << sv.getDiemToan() << endl;
        cout << sv.getDiemLy() << endl;
        cout << sv.getDiemTrungBinh() << endl;
        cout << sv.getHocLuc() << endl;
    }
}

int main(){
    Menu menuSv;
    return 0;
}