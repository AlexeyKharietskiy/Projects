#pragma once
#include "Person.cpp"
    class Employee : public Person {
    protected:
        string position;
        double salary;

    public:
        Employee(string position, double salary)
        {
            this->money = 0;
            this->position = position;
            this->salary = salary;
        }
        void doWork() {
            money += salary / 15;
        }
        string getPosition() const {
            return position;
        }

        double getSalary() const {
            return salary;
        }
    };
