#include<iostream>
#include<string>

class quanli {
    public:
        quanli();
        int themDoUong();
        void suaDoUong();
        void xoaDoUong();
        void danhSachDoUong();
}

class doUong {
    private:
        string name;
        int gia;
        int soluong;
    public:
        doUong(string _name, int _gia, int _soluong);
        void setName(string name);
        int getName();
        void setGia(int gia);
        int getGia();
        void setSoluong(int soluong);
        int getSoluong();
}