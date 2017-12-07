#ifndef OTHER_H
#define OTHER_H
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Other
{
    public:
        Other();
        Other(string soda, string bread, string dessert);
        void saveSoda();
        void saveBread();
        void saveDessert();
        void startRegester(Other& other);
        void printSoda();
        void printBread();
        void printDessert();

        friend ostream& operator << (ostream& out, Other& other);
        friend istream& operator >> (istream& in, Other& other);

    private:
        string soda;
        string bread;
        string dessert;

};

#endif // OTHER_H
