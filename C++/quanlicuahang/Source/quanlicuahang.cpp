/*
* File: quanlicuahang.cpp
* Author: Le Quang Vong
* Date: 02/06/2023
* Description:This file is a header file that contains all the prototypes to manage the drink
*/

#include <quanlicuahang.hpp>

/*
 * Function: getID
 * Description: A method of class Drink
 * Input:
 *    None
 * Output:
 *    ID Drink
*/

int Drink::getID(){
    return Drink::ID;
}

/*
 * Function: setName
 * Description: A method of class Drink
 * Input:
 *    name drink
 * Output:
 *    none
*/

void Drink::setName(string _name){
    this -> name = _name;
}

/*
 * Function: getName
 * Description: A method of class Drink
 * Input:
 *    None
 * Output:
 *    name Drink
*/

string Drink::getName(){
    return Drink::name;
}

/*
 * Function: setPrice
 * Description: A method of class Drink
 * Input:
 *    price of drink
 * Output:
 *    none
*/

void Drink::setPrice(double _price){
    this -> price = _price;
}

/*
 * Function: getPrice
 * Description: A method of class Drink
 * Input:
 *    None
 * Output:
 *    price of drink
*/

double Drink::getPrice(){
    return Drink::price;
}

/**
     * Function: Constructor 
     * Description: used to let the user choose the functions of the manager, use switch... case and do...while.
     * Input:
     * None
     * Output:
     * none
    */

Manager::Manager(){
    int num;
    cout << "MANAGER";
    cout << "1. Quantity Table"<< endl;
    cout << "2. Add Drink"<< endl;
    cout << "3. Fix Drink"<< endl;
    cout << "4. Delete Drink"<< endl;
    cout << "5. List Drink"<< endl;
    cout << " Enter Key: ";
    cin >> num;

    do
    {
        do
        {
            cout << " Enter Key again: ";
            cin >> num;
        } while (num < 0 || num > 5);

        switch (num)
        {
        case 1:
            quantityDrink();
            break;
        case 2:
            addDrink();
            break;
        case 3:
            fixDrink();
            break;
        case 4:
            delDrink();
            break;
        case 5:
            listDrink();
            break;
        default:
            break;
        }
    } while (num != 0);    
}

/*
 * Function: quantityDrink
 * Description: A method of class Manager, This function is for entering the number of tables.
 * Input:
 *    none
 * Output:
 *    quantity
*/

int Manager::quantityDrink(int quantity){
    cout << "Nhap so luong ban: ";
    cin << quantity;
    return quantity;
}

/*
 * Function: addDrink
 * Description: A method of class Manager, This function is used to add drinks and then upload them to the drinks database.
 * Input:
 *    name, price of drink
 * Output:
 *    databaseDrink
*/

void Manager::addDrink(){
    string name;
    double price;
    cout << "Enter the name of the drink: "<< endl;
    cin << name;
    cout << "Enter the price of the drink: "<< endl;
    cin << price;
    Drink Drink(name, price);
    DatabaseDrink.push_back(Drink);
}

/*
 * Function: fixDrink
 * Description: A method of class Manager, This function is used to edit existing drink information on the beverage database.
 * Input:
 *    name, price of drink need fix
 * Output:
 *    databaseDrink
*/

void Manager::fixDrink(){
    int num;
    int id;
    string name;
    double price;
    cout<< "Fix information of drink: "<< endl;
    cout<< "Enter the drink ID to fix: ";
    cin << id;
    
    for(int i = 0; i<DatabaseDrink.size(); i++){
        if(id == DatabaseDrink[i].getID()){
            do
            {
                cout << "Select function: " << endl;
                cout << "1. change name of drink: " << endl;
                cout << "2. changge price of drink: " << endl;
                cin >> num;

                switch (num)
                {
                case 1:
                    cout << "Enter name of drink: " << endl;
                    cin >> name;
                    DatabaseDrink[i].setName(name);
                    break;
                case 2:
                    cout << "Enter price of drink: " << endl;
                    cin >> price;
                    DatabaseDrink[i].setPrice(price);
                    break;
                default:
                    break;
                }
            } while (num != 0); 
        }else{
            cout << "Drinks not found!";
        };
    }
}

/*
 * Function: delDrink
 * Description: A method of class Manager, This function is used to delete the information of the drink to be deleted in the beverage database.
 * Input:
 *    name, price of drink need delete
 * Output:
 *    databaseDrink
*/

Manager::delDrink(){
    int id;
    cout << "Delete Drink"<< endl;
    cout << "Enter the drink ID to delete: " << endl;
    cin >> id;
    for(int i = 0; i < DatabaseDrink.size(); i++){
        if(DatabaseDrink[i].getID() == id){
            DatabaseDrink.erase(DatabaseDrink.begin()+1);
            cout << "Successful delete !";
        }else{
            cout << "Drinks not found!";
        }
    } 
}

/*
 * Function: listDrink
 * Description: A method of class Manager, This function is used to display the information of the list of drinks in the beverage database
 * Input:
 *    none
 * Output:
 *    list Drink
*/

void Manager::listDrinK(){
    cout << "ID \t Name \t Price" << endl;
    for(Drink Drink : DatabaseDrink){
        cout << Drink.getID() << "\t" << Drink.getName() << "\t" << Drink.getPrice() << endl;
    }
}

/*
 * Function: getDatabaseDrink
 * Description: A method of class Manager
 * Input:
 *    None
 * Output:
 *    databaseDrink
*/

vector<Drink>Manager::getDatabaseDrink(){
    return Manager::DatabaseDrink;
}

/**
 * Function: Constructor 
 * Description: used to select functions for kernel using switch...case and do...while.
 * Input:
 * Table's Database, quantity of table
 * Output:
 * none
*/

Staff::Staff(vector<table> DatabaseTable, int quantityTable){
    for(Drink drink : DatabaseDrink){
        DatabaseDrink.push_back(drink);
    }

    for(int i = 1; i <= quantityTable;i++){
        table table;
        table.status = 0;
        table.numberTable = i;
        DatabaseTable.push_back(table);
    }
    int num;
    int numberTable;
    cout << "Please choose function: " << endl;
    cin >> numberTable;
    cout << "1. Order"<< endl;
    cout << "2. List"<< endl;
    cout << "3. Delete"<< endl;
    cout << "4. Fix"<< endl;
    cout << "5. Pay"<< endl;
    cout << "6. New Table"<< endl;
    cout << " Enter Key: ";
    cin >> num;

    do
    {
        do
        {
            cout << " Enter Key again: ";
            cin >> num;
        } while (num < 0 || num > 6);

        switch (num)
        {
        case 1:
            orderDrink();
            break;
        case 2:
            list_Drink();
            break;
        case 3:
            fix_Drink();
            break;
        case 4:
            del_Drink();
            break;
        case 5:
            pay_Drink();
            break;
        case 6:
            new_Table();
            break;
        default:
            break;
        }
    } while (num != 0);    
}

/*
 * Function: orderDrink
 * Description: A method of class Staff, This function is used to order drinks by table number
 * Input:
 *    table's number
 * Output:
 *    quantity of Drink
*/

void Staff::orderDrink(int numberTable){
    int quantity;
    int id;
    quantityDrink quantityDrink;
    cout << "Enter Drink ID: " << endl;
    cin >> id;
    for(Drink Drink : DatabaseDrink){
        if(Drink.getID() == id){
            cout << "Enter quantity: " << endl;
            cin << quantity;
            quantityDrink.name = Drink;
            quantityDrink.quantity = quantity;
            DatabaseTable[numberTable-1].DatabaseQuatityDrink.push_back(quantityDink);
        }else{
            cout << "Drinks not found!";
        }
    }
}

/*
 * Function: list_Drink
 * Description: A method of class Staff, This function is used to display the information of the list of drinks in the beverage database
 * Input:
 *    None
 * Output:
 *    list of Drink
*/


void Staff::list_Drink(){
    cout << "ID \t Name \t Price" << endl;
    for(Drink Drink : DatabaseDrink){
        cout << Drink.getID() << "\t" << Drink.getName() << "\t" << Drink.getPrice() << endl;
    }
}

/*
 * Function: fix_Drink
 * Description: A method of class Staff, This function is used to display the information of the list of drinks in the beverage database
 * Input:
 *    number table
 * Output:
 *    detele Drink or order drink
*/

void Staff::fix_Dink(int numberTable){
    int num;
    cout << "Fix order" << endl;
    if(numberTable > 0 && numberTable <= DatabaseTable.size()){
        cout << "1. Delete Drink" << endl;
        cout << "2. Add Drink" << endl;
        cout << "Enter Key "<< endl;
        cin << num;
        do
        {
            do
            {
                cout << " Enter Key again: ";
                cin >> num;
            } while (num < 0 || num > 2);
            switch (num)
            {
            case 1:
                del_Dink(numberTable);
                break;
            case 2:
                orderDink(numberTable);
                break;
            default:
                break;
            }
        } while (num != 0);           
    }
}

/*
 * Function: del_Drink
 * Description: A method of class Staff, This function is used to delete drinks that customers have ordered previously in the beverage database
 * Input:
 *    number table
 * Output:
 *    none
*/

void Staff::del_Dink(int numberTable){
    int id;
    cout << "Delete Drink" << endl;
    for(int i = 0; i < DatabaseTable[numberTable-1].DatabaseQuatityDrink.size();i++){
        DatabaseTable[numberTable-1].DatabaseQuatityDrink.erase(DatabaseTable[numberTable-1].DatabaseQuatityDrink.begin()+i);
    }
}

/*
 * Function: pay_Drink
 * Description: A method of class Staff, This function is used to pay for the drinks that the customer has ordered.
 * Input:
 *    number table
 * Output:
 *    total
*/

void Staff::pay_Drink(int numberTable){
    int total = 0;
    cout << "Pay" << endl;
    if(numberTable > 0 && numberTable <= DatabaseTable.size()){
        for(quantityDrink quantityDrink : DatabaseTable[numberTable - 1].DatabaseQuatityDrink){
            total = total + quantityDrink.name.getPrice()*quantityDrink.quantity;
        }
        cout << "Table" << numberTable << total << "VND" << endl;
        DatabaseTable[numberTable -1].DatabaseQuatityDrink.clear();
    }
}

/*
 * Function: statusAllTable
 * Description: A method of class Staff, This function is used to check whether the table is empty or occupied
 * Input:
 *    number table
 * Output:
 *    total
*/

void Staff::statusAllTable(){
    for(table Table : DatabaseTable){
        cout << "|Table " << Table.numberTable <<":";
        if(table.status = 1){
            cout <<" O ";
        }else{
            cout << " X "; 
        }
    }
    cout <<"|" << endl;
}

/*
 * Function: new_Table
 * Description: A method of class Staff, This function is used to create a new table.
 * Input:
 *    number table
 * Output:
 *    none
*/

void Staff::new_Table(int numberTable){
    cout << "New Table";
    if(numberTable > 0 && numberTable <= DatabaseTable.size()){
        if(DatabaseTable[numberTable-1].status = 0){
            DatabaseTable[numberTable -1].status = 1;
            orderDrink(numberTable);
        }else{
            cout<<"The table is already occupied !";
        }
    }
}

/**
 * Function: Constructor 
 * Description: This function is to select an employee or a manager.
 * Input:
 * None
 * Output:
 * none
*/

Menu::Menu(){
    int num;
    cout << "Enter to select person: " << endl;
    cout << "1. Manager";
    cout << "2. Staff";
    switch (num)
    {
    case 1:
        ql.Manager();
        break;
    case 2:
        nv.Staff();
        break;
    default:
        break;
    }
}