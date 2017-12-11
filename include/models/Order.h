#ifndef ORDER_H
#define ORDER_H


#include <iostream>


using namespace std;

class Order
{
    public:
        Order();
        Order(int pizza_no, int loc_no, bool paid, bool delivery, int price);
        bool get_paid();
        bool get_delivery();
        int get_price();
        int get_status();
        int get_pizza_no();
        int get_loc_no();
        void set_pizza_no(int pizza_no);
        void set_loc_no(int loc_no);
        void set_paid(bool paid);
        void set_delivery(bool delivery);
        void set_price(int price);
        void status_advance();
        friend ostream& operator << (ostream& out, Order& order);
        friend istream& operator >> (istream& in, Order& order);

    private:
        int pizza_no;
        int loc_no;
        bool paid;
        bool delivery;
        int price;
        int status;

};

#endif // ORDER_H
