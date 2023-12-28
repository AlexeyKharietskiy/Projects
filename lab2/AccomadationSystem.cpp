#pragma once
#include <iostream>
#include <string>
#include "System.cpp"

using namespace std;


    class AccommodationSystem :public System {

    public:
        enum RoomType
        {
            ECONOM,
            LUXE,
            BUSINESS,
            PRESIDENT
        };
        AccommodationSystem(string name, int days, RoomType type) : System(name) {
            this->type = type;
            this->days = days;
            switch (type)
            {
            case ECONOM:
                cost = 100;
                break;
            case LUXE:
                cost = 200;
                break;
            case BUSINESS:
                cost = 300;
                break;
            case PRESIDENT:
                cost = 500;
                break;
            default:
                break;
            }
        }
        double getCost() override {
            return days * cost;
        }
    private:
        RoomType type;
        int days;
    };


