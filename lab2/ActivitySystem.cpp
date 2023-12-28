#pragma once
#include <iostream>
#include <string>
#include"BookSystem.cpp"



using namespace std;

    class ActivitySystem :public System {
    public:
        enum Activities
        {
            MUSEUM,
            ATTRACTIONS,
            YOGA,
            PARK
        };
        ActivitySystem(string name) : System(name)
        {
            cost = 0;
        }
     
        void doActivity(Tourist&tourist,Activities activity) {
            switch (activity)
            {
            case ActivitySystem::MUSEUM:
                cost += 15;
                tourist.setPleasure(10);
                break;
            case ActivitySystem::ATTRACTIONS:
                cost += 70;
                tourist.setPleasure(30);
                break;
            case ActivitySystem::YOGA:
                cost += 50;
                tourist.setPleasure(20);
                break;
            case ActivitySystem::PARK:
                tourist.setPleasure(20);
                break;
            default:
                break;
            }
        }
    private:
        Activities activity;
    };

