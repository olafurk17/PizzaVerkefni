#ifndef ORDERREPO_H
#define ORDERREPO_H

#include <iostream>
#include <fstream>
#include <vector>
#include "Order.h"

class OrderRepo
{
    public:
        OrderRepo();
        void read(vector<Order>& order_vector);
        void write(Order& order);

    private:
};

#endif // ORDERREPO_H
