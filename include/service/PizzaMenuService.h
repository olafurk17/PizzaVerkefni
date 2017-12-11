#ifndef PIZZAMENUSERVICE_H
#define PIZZAMENUSERVICE_H
#include "PizzaMenuRepo.h"


class PizzaMenuService
{
    public:
        PizzaMenuService();
        int number_locations();
        void print_line (int line_no);
        void save(PizzaMenu& pizza);
        int finalPrice(PizzaMenu& pizza, int price);
        int sizePrice(char input);

    private:
        PizzaMenuRepo repo;
        int priceS;

};

#endif // PIZZAMENUSERVICE_H
