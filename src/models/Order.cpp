#include "Order.h"

Order::Order()
{
    //ctor
    paid = false;
    delivery = false;
    price = 0;
    status = 0;
}

Order::Order(PizzaMenu& pizza, workplaces& loc, bool paid, bool delivery, int price)
{
    this-> pizza = pizza;
    this-> loc = loc;
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
    out << order.pizza << order.loc << order.paid << "," << order.delivery << "," << order.price << "," << order.status << ",";
    return out;
}

istream& operator >> (istream& in, Order& order)
{
    in >> order.pizza >> order.loc >> order.paid >> order.delivery >> order.price >> order.status;
    return in;
}
