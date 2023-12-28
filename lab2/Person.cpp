#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
    string phoneNumber;
    double money;

public:
    Person()
    {
        this->age = 0;
        this->name = " ";
        phoneNumber = " ";
    }
    Person(string name,int age,double money) {
        this->age = age;
        this->name = name;
        phoneNumber = " ";
        this->money = money;
    }
    
    void setPhoneNumber(string number) {
        phoneNumber = number;
    }

    string getName() {
        return name;
    }

    int getAge(){
        return age;
    }

    string getPhoneNumber() {
        return phoneNumber;
    }
    double getMoney() {
        return money;
    }
};

