#ifndef ORDERSERVICE_H
#define ORDERSERVICE_H

#include "Order.h"
#include "OrderRepo.h"


class OrderService
{
    public:
        OrderService();
        void write(Order& order);

    private:
        OrderRepo repo;

};

#endif // ORDERSERVICE_H
