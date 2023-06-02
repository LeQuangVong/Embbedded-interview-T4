#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Drink {
    private:
        string name;
        double price;
    public:
        Drink(string name, double price);
        string getName();
        void setPrice(double price);
        double getPrice();

};

string Drink::getName(){
    return Drink::name;
}

double Drink::getPrice(){
    return Drink::price;
}


class Manager {
    private:
        vector<Drink> DatabaseDrink;
        int quantityTable();
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
};

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
}
int main(){
    return 0;
}