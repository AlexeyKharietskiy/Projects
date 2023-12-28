#pragma once
#include <iostream>
#include <string>
#include "TourSystem.cpp"

using namespace std;

    class TransportSystem : public System {
    private:
        string transportType;
        double route;

    public:
        TransportSystem(string name, TourSystem& tour) : System(name) {
            this->transportType = "";
            this->route = tour.getWay();
        }

        double getCost() override {
            return 10 * route;
        }
        string getTransportType() {
            return transportType;
        }
        void drive() {
        }
        double getRoute() {
            return route;
        }
    };

