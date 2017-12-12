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

    private:
        PizzaMenuRepo repo;
};

#endif // PIZZAMENUSERVICE_H
