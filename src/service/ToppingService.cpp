#include "ToppingService.h"

ToppingService::ToppingService()
{
    //ctor
}

void ToppingService::write(Toppings& topping)
{
    repo.write(topping);
}

void ToppingService::read(vector<Toppings>& toppingVector)
{
    repo.read(toppingVector);
}
