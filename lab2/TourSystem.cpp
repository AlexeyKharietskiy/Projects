#include "System.cpp"
#include "Location.cpp"
#include <cmath>
using namespace std;

    class TourSystem :public System {
    private:
        Location startLocation;
        Location endLocation;
        string startDate;
        string endDate;

    public:
        TourSystem(string name, double cost) :System(name, cost)
        {
            startDate = "";
            endDate = "";
        }
        double getWay()
        {
            return sqrt(pow(startLocation.getX() - endLocation.getX(), 2) + pow(startLocation.getY() - endLocation.getY(), 2));
        }
        void setStartCoordinates(int x, int y) {
            startLocation.setY(y);
            startLocation.setX(x);
        }

        void setEndCoordinates(int x, int y) {
            endLocation.setX(x);
            endLocation.setY(y);
        }

        void setStartDate(string date) {
            startDate = date;
        }

        void setEndDate(string date) {
            endDate = date;
        }
        string getStartDate() const {
            return startDate;
        }

        string getEndDate() const {
            return endDate;
        }

    };


