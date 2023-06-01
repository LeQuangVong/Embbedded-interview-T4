/*
* File: bai4.cpp
* Author: LE QUANG VONG
* Date: 28/05/2023
* Description: Tạo một lớp động vật với các thuộc tính tên, tuổi và trọng lượng, và các
phương thức để tính chỉ số BMI, so sánh tuổi và trọng lượng của các động vật khác nhau.
*/

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

/*
* Function: Animal
* Description: The class contains the methods and properties of the animal.
*/ 

class Animal {
    private:
        string name;
        int age;
        float weight;
        float height;
    public:
        Animal(string n, int a, float w, float h);
        float BMI();
        void age_comparison(Animal a1, Animal a2);
        void weight_comparison(Animal a1, Animal a2);
        string getName();
};

/**
     * Function: Constructor 
     * Description: enter initialization information
     * Input:
     * string name
     * int age
     * float weight
     * Output:
     * none
    */ 
Animal::Animal(string n = "", int a = 0, float w = 0, float h = 0){
    Animal::name = n;
    Animal::age = a;
    Animal::weight = w;
    Animal::height = h;
}

string Animal::getName(){
    return Animal::name;
}

/**
 * Function: BMI
 * Description: This function calculates the BMI of the animals.
 * Input:
 *    None
 * Output:
 *    the BMI of the animals.
*/
float Animal::BMI(){
    return Animal::weight/(Animal::height*Animal::height);
}

/**
 * Function: age_comparison
 * Description: This function compares the age of the animal
 * Input:
 *  Animal a1
 *  Animal a2
 * Output:
 *  comparison results
*/

void Animal::age_comparison(Animal a1, Animal a2){
    if(a1.age > a2.age){
        cout << a1.name << " older than " << a2.name << endl;
    }else{
        cout << a2.name << " older than " << a1.name << endl;
    }
}

/**
 * Function: weight_comparison
 * Description: this function to compare the weight of animals
 * Input:
 *  Animal a1
 *  Animal a2
 * Output:
 *    comparison results
*/

void Animal::weight_comparison(Animal a1, Animal a2){
    if(a1.weight > a2.weight){
        cout << a1.name << " heavier than " << a2.name << endl;
    }else{
        cout << a2.name << " heavier than " << a1.name << endl;
    }
}

int main()
{
    Animal a1 = Animal("Bao",23,6,15);
    Animal a2 = Animal("Heo",26,9,20);
    cout << "chi so BMI cua " << a1.getName() << " la : " << a1.BMI() << endl;
    cout << "chi so BMI cua " << a2.getName() << " la : " << a2.BMI() << endl;
    Animal a;
    a.age_comparison(a1,a2);
    a.weight_comparison(a1,a2);
    return 0;
}