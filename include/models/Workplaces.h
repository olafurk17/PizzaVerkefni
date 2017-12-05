#ifndef WORKPLACES_H
#define WORKPLACES_H
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class workplaces
{
    public:
        workplaces();
        friend ostream& operator <<(ostream& out, workplaces& workplace);
        friend istream& operator >>(istream& in, workplaces& workplace);
        void save();
        void print();
        void print_line(int line_no);
        //void start_register();
        int number_locations();

    private:
        string name;
};

#endif // WORKPLACES_H
