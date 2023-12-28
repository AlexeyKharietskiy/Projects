#pragma once
#include <iostream>
#include <string>
using namespace std;

    class Location {
    private:
        string name;
        int x;
        int y;
    public:
        Location() {
            this->x = 0;
            this->y = 0;
            this->name = "";
        };
        Location(string nam, string deskr, int pointX, int pointY) {
            this->name = nam;
            this->x = pointX;
            this->y = pointY;
        }
        void setX(int x) {
            this->x = x;
        }
        void setY(int y) {
            this->y = y;
        }
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
        string getName() const {
            return name;
        }

    };


