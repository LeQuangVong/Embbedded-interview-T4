/*
* File: bai8.cpp
* Author: LE QUANG VONG
* Date: 28/05/2023
* Description: Tạo một lớp tài khoản ngân hàng với các thuộc tính số tài khoản, tên tài
khoản và số dư, và các phương thức để rút, nộp tiền và kiểm tra số dư trong tài khoản.
*/

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

/*
* Function: account_Bank
* Description: The class contains the methods and properties of the Bank account.
*/

class account_Bank {
    private:
        int id;
        string name;
        int money;
    public:
        account_Bank(int _id, string _name, int _money);
        void take_money(int money_need);
        int send_money(int money_extra);
        void check_money();
};

/**
     * Function: Constructor 
     * Description: enter initialization information
     * Input:
     * int _id
     * string _name
     * int _money
     * Output:
     * none
    */ 

account_Bank::account_Bank(int _id, string _name, int _money){
    account_Bank::id = _id;
    account_Bank::name = _name;
    account_Bank::money = _money;
}

/**
 * Function: take_money
 * Description: This function is used to withdraw money from a bank account when the amount to withdraw is less than or equal to the current balance
 * Input:
 *  money need
 * Output:
 *  None
*/

void account_Bank::take_money(int money_need){
    if(money_need <= account_Bank::money){
        int take_money = account_Bank::money - money_need;
        cout << "You have successfully withdrawn :" << money_need << "Current balance is " << take_money << endl;
    }else{
        cout << "Insufficient balance in the account !" << endl;
    }
}

/**
 * Function: send_money
 * Description: This function does the addition of money to the bank account
 * Input:
 *  money extra
 * Output:
 *  send money
*/

int account_Bank::send_money(int money_extra){
    int send_money = money_extra + account_Bank::money;
    return send_money;
}

/**
 * Function: check_money
 * Description: this function to check account balance.
 * Input:
 *  none
 * Output:
 *  result
*/

void account_Bank::check_money(){
    cout<< "Current balance is " << account_Bank::money << endl;
}

int main(){
    account_Bank a1(9612761,"Le Quang Vong",10000000);
    a1.take_money(1000000);
    cout << "So tien ban can gui la: " << a1.send_money(2000000) << endl;
    a1.check_money();
    return 0;
}