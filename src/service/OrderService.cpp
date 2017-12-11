#include "OrderService.h"

OrderService::OrderService()
{
    //ctor
}

void OrderService::write(Order& order){
    repo.write(order);
}

int OrderService::price(Order& order){
    int p = 0;
    ///p = pizza1 + pizza2;
    return order.set_price(p);

}
