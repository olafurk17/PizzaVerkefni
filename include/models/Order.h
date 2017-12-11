#ifndef ORDER_H
#define ORDER_H

#include "../models/PizzaMenu.h"
#include "../models/Workplaces.h"

#include <iostream>


using namespace std;

class Order
{
    public:
        Order();
        Order(PizzaMenu& pizza, Workplaces& loc, bool paid, bool delivery, int price);
        bool get_paid();
        bool get_delivery();
        int get_price();
        int get_status();
        void set_paid(bool paid);
        void set_delivery(bool delivery);
        void set_price(int price);
        void status_advance();
        friend ostream& operator << (ostream& out, Order& order);
        friend istream& operator >> (istream& in, Order& order);

    private:
        PizzaMenu pizza;
        Workplaces loc;
        bool paid;
        bool delivery;
        int price;
        int status;

};

#endif // ORDER_H
