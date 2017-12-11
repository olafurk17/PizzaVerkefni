#include "Order.h"

Order::Order()
{
    //ctor
    pizza_no = 0;
    loc_no = 0;
    paid = false;
    delivery = false;
    price = 0;
    status = 0;
}

Order::Order(int pizza_no, int loc_no, bool paid, bool delivery, int price)
{
    this-> pizza_no = pizza_no;
    this-> loc_no = loc_no;
    this-> paid = paid;
    this-> delivery = delivery;
    this-> price = price;
    this-> status = 0;
}

bool Order::get_paid()
{
    return this->paid;
}

bool Order::get_delivery()
{
    return this->delivery;
}

int Order::get_price()
{
    return this->price;
}

int Order::get_status()
{
    return this->status;
}

int Order::get_pizza_no()
{
    return this->pizza_no;
}

int Order::get_loc_no()
{
    return this->loc_no;
}

void Order::set_pizza_no(int pizza_no)
{
    this->pizza_no = pizza_no;
}

void Order::set_loc_no(int loc_no)
{
    this->loc_no = loc_no;
}

void Order::set_paid(bool paid)
{
    this->paid = paid;
}

void Order::set_delivery(bool delivery)
{
    this->delivery = delivery;
}

void Order::set_price(int price)
{
    this->price = price;
}

void Order::status_advance()
{

    this->status++;
}

ostream& operator << (ostream& out, Order& order)
{
    out << order.pizza_no << order.loc_no << order.paid << "," << order.delivery << "," << order.price << "," << order.status << ",";
    return out;
}

istream& operator >> (istream& in, Order& order)
{
    in >> order.pizza_no >> order.loc_no >> order.paid >> order.delivery >> order.price >> order.status;
    return in;
}
