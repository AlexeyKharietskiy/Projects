#pragma once
#include "Tourist.cpp"

using namespace std;
    class BookSystem :public System
    {
    private:

    public:
        BookSystem(string name, double cost) :System(name, cost) {

        }
        void bookTour(Tourist& tourist) {
            tourist.bookID++;
        }

    };
