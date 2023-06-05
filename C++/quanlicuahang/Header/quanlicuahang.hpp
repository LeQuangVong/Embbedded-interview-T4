/*
* File: quanlicuahang.hpp
* Author: Le Quang Vong
* Date: 02/06/2023
* Description:This file is a header file that contains all the prototypes to manage the drink
*/

#ifndef __QUANLICUAHANG_H
#define __QUANLICUAHANG_H
#include <stdio.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Drink {
    private:
        int ID;
        string name;
        double price;
    public:
        Drink(string name, double price);
        void setName(string _name);
        string getName();
        void setPrice(double _price);
        double getPrice();
        int getID();
};

class Manager {
    private:
        vector<Drink> DatabaseDrink;
        int quantityTable(int quantity = 0);
        void addDrink();
        void fixDrink();
        void delDrink();
        void listDrinK();
    public:
        Manager();
        int getQuantityTable();
        vector<Drink> getDatabaseDrink;
};

typedef struct {
    Drink name;
    int quantity;
}quantityDrink;

typedef struct {
    int numberTable;
    bool status;
    vector<quantityDrink> DatabaseQuatityDrink;
}table;


class Staff {
    private:
        vector<table> DatabaseTable;
        vector<Drink> DatabaseDrink;
    public:
        Staff(vector<table> DatabaseTable, int quantityTable);
        void orderDrink(int numberTable);
        void del_Dink(int numberTable);
        void list_Drink();
        void fix_Dink(int numberTable);
        void pay_Drink(int numberTable);
        void new_Table(int numberTable);

};

class Menu {
    private:
        Manager ql;
        Staff nv;
    public:
        Menu();
};
#endif