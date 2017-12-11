#include "OrderService.h"

OrderService::OrderService()
{
    //ctor
}

void OrderService::write(Order& order)
{
    repo.write(order);
}
