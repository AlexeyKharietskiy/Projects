#include "Person.cpp"

    class Tourist : public Person {
        friend class BookSystem;
    private:
        int bookID;
        int pleasure;
    public:
        Tourist(string name, int age, double cash) :Person(name, age, money)
        {
            this->bookID = 0;
            this->money = cash;
            this->pleasure = 10;
        }
        void setPleasure(int pleasure) {
            this->pleasure = pleasure;
        }
        int getPleasure() {
            return pleasure;
        }
        void pay(System* system) {
            money -= (*system).getCost();
        }

        int getBookID() const {
            return bookID;
        }

        double getMoney() const {
            return money;
        }

    };
