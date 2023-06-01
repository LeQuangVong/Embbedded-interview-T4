/*
* File: bai9.cpp
* Author: LE QUANG VONG
* Date: 28/05/2023
* Description: Tạo một lớp sách với các thuộc tính tên sách, tác giả, năm xuất bản
và số lượng, và các phương thức để in thông tin sách, mượn sách và trả sách.
*/

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

/*
* Function: Book
* Description: The class contains the methods and properties of the book.
*/ 

class Book {
    private:
        string name;
        string author;
        int year;
        int quantity;
    public:
        Book(string _name, string _author, int _year, int _quantity);
        void info_book();
        void borrow_book(int sl);
        void give_back(int sl);
};

/**
     * Function: Constructor 
     * Description: enter initialization information
     * Input:
     * string _name
     * string _author
     * int _year
     * int _quantity
     * Output:
     * none
    */ 

Book::Book(string _name, string _author, int _year, int _quantity){
    Book::name = _name;
    Book::year = _year;
    Book::author = _author;
    Book::quantity = _quantity;
}

/**
 * Function: info_book
 * Description: This function is used to display book information.
 * Input:
 * None
 * Output:
 * author, name, year, quatity
*/

void Book::info_book(){
    cout << Book::author;
    cout << Book::name;
    cout << Book::year;
    cout << Book::quantity;
}

/**
 * Function: brorrow_book
 * Description: This function is used to borrow books, if you borrow more than available, you will report a loss of goods.
 * Input:
 * s1
 * Output:
 * None
*/

void Book::borrow_book(int sl){
    if(Book::quantity > sl){
        int inventory_book = Book::quantity - sl;
    }else{
        cout << " Out of stock !" << endl;
    }
}

/**
 * Function: give_back
 * Description: This function is used to borrow books, if you borrow more than available, you will report a loss of goods.
 * Input:
 * s1
 * Output:
 * None
*/

void Book::give_back(int sl){
    Book::quantity = Book::quantity + sl;
}

int main(){
    Book a1(" Mat biec "," Nguyen Nhat Anh ",2023,6);
    a1.info_book();
    a1.borrow_book(6);
    a1.give_back(5);
    return 0;
}