#ifndef PRICE_H
#define PRICE_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class Price
{
    public:
        Price();
        virtual ~Price();
        void setPrice(double meat, double vegetable, double cheese);
        void setNumber(int numbMeat, int numbVegetable, int numbCheese);
        void txtPrice();
        void printPrice();
        //void readPrice();
        void multipleTopping();
        void calcTopping();
        void totalPrice();

        friend ostream& operator << (ostream& out, const Price& price);


    private:
        double meat;
        double vegetable;
        double cheese;
        int numbMeat;
        int numbVegetable;
        int numbCheese;
};

#endif // PRICE_H
