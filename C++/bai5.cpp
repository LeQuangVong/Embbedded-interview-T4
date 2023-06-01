/*
* File: bai5.cpp
* Author: LE QUANG VONG
* Date: 28/05/2023
* Description: Tạo một lớp người với các thuộc tính tên, tuổi và địa chỉ, và các
phương thức để in thông tin của người đó và tính tuổi của người đó.
*/

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

/*
* Function: Animal
* Description: The class contains the methods and properties of the animal.
*/ 

class Person {
    private:
        string name;
        int age;
        string address;
    public:
        Person(string n, int a, string addr);
        void info(Person p);
        int number_age(Person p);
};

/**
     * Function: Constructor 
     * Description: enter initialization information
     * Input:
     * string n
     * int a
     * string addr
     * Output:
     * none
    */ 

Person::Person(string n = "", int a = 0, string addr = ""){
    Person::name = n;
    Person::age = a;
    Person::address = addr;
}

/**
 * Function: info
 * Description: This function calculates the BMI of the animals.
 * Input: This function prints out the person's information
 *    Person p
 * Output:
 *    name, age, address
*/

void Person::info(Person p){
    cout<< "My name is " << p.name << endl;
    cout<< "My name is " << p.age << endl;
    cout<< "My name is " << p.address << endl;
}

/**
 * Function: number_age
 * Description: This function prints out the age of the person.
 * Input:
 *    Person p
 * Output:
 *   number age 
*/

int Person::number_age(Person p){
    int number_age = p.age;
    return number_age;
}
 
int main()
{
    Person a("Nguyen Van A",23,"Binh Tan");
    a.info(a);
    Person b;
    cout << "Só tuoi cua ban la :" << b.number_age(a) << endl;
    return 0;
}