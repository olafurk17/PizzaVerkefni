#ifndef PIZZAMENU_H
#define PIZZAMENU_H
#include <string>
#include <istream>
#include <iostream>
#include <fstream>
#include "toppings.h"
#include <vector>
#include "Other.h"

using namespace std;


class PizzaMenu

{
    public:
        PizzaMenu();
        PizzaMenu (int toppingCnt, string topping, string name, int price);
        friend ostream& operator <<(ostream& out, PizzaMenu& pizza);
        friend istream& operator >>(istream& in, PizzaMenu& pizza);
        void save();
        void print();
        void startRegester(PizzaMenu& pizza);
        int number_locations();
        void print_line(int line_no);
        void menu();

    private:
        int toppingCnt;
        string name;
        vector <string> pizzaToppings;
        int price;
};

#endif // PIZZAMENU_H
