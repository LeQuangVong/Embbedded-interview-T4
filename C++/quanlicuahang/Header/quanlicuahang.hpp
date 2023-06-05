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

/*
* Function: class Drink
* Description: The class contains the methods and properties of the drinks.
*/ 

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

/*
* Function: class Manager
* Description: The class contains the methods and properties of the manager.
*/ 

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

/*
* Function: quantityDrink, table
* Description: typedef used for default list for data type
*/

typedef struct {
    Drink name;
    int quantity;
}quantityDrink;

typedef struct {
    int numberTable;
    bool status;
    vector<quantityDrink> DatabaseQuatityDrink;
}table;

/*
* Function: class Staff
* Description: The class contains the methods and properties of the Staff.
*/ 

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

/*
* Function: class Menu
* Description: The class contains the methods and properties of the Menu.
*/ 

class Menu {
    private:
        Manager ql;
        Staff nv;
    public:
        Menu();
};
#endif