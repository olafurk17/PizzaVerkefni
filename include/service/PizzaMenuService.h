#ifndef PIZZAMENUSERVICE_H
#define PIZZAMENUSERVICE_H
#include "PizzaMenuRepo.h"


class PizzaMenuService
{
    public:
        PizzaMenuService();
        int number_locations();
        void print_line (int line_no);
        void write(PizzaMenu& pizza);
        int finalPrice(PizzaMenu& pizza, int price);
        int sizePrice(char input);
        void read(vector<PizzaMenu>& pizzaMenuVector);

    private:
        PizzaMenuRepo repo;
        int priceS;

};

#endif // PIZZAMENUSERVICE_H
