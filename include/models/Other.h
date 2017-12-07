#ifndef OTHER_H
#define OTHER_H
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Other
// bua til 2 klasa í viðbot
{
    public:
        Other();
        Other(string soda);
        Other(string bread);
        Other(string dessert);
        Other(string soda, string bread, string dessert);
        void printSoda();
        void printBread();
        void printDesert();
        void clear_screen();
        string getsoda();
        string getbread();
        string getdessert();
        string setsoda(string str);
        string setbread(string str);
        string setdessert(string str);


        friend ostream& operator << (ostream& out, Other& other);
        friend istream& operator >> (istream& in, Other& other);

    private:
        string soda;
        string bread;
        string dessert;

};

#endif // OTHER_H
