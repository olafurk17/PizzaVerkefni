#ifndef WORKPLACESREPO_H
#define WORKPLACESREPO_H

#include "../models/Workplaces.h"
#include <string>
#include <iostream>
#include <fstream>


class WorkplacesRepo
{
    public:
        WorkplacesRepo();
        void save(workplaces& workplaces);
        void print();
        void print_line(int line_no);
        int number_locations();

    private:
        workplaces locations;
};

#endif // WORKPLACESREPO_H
