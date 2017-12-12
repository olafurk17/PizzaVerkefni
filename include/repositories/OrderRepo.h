#ifndef ORDERREPO_H
#define ORDERREPO_H

#include <iostream>
#include <fstream>
#include <vector>
#include "Order.h"
#include <cstdlib>

class OrderRepo
{
    public:
        OrderRepo();
        //void read(vector<Order>& order_vector);
        void write(Order& order);
        Order readin_vector(string line);
        void read();

    private:
};

#endif // ORDERREPO_H
