#ifndef OTHERREPO_H
#define OTHERREPO_H
#include "../../include/models/Other.h"


class OtherRepo
{
    public:
        OtherRepo();
        void saveSoda(Other& other);
        void saveBread(Other& other);
        void saveDessert(Other& other);
        void printSoda();
        void printBread();
        void printDesert();


    private:
        Other other;
};

#endif // OTHERREPO_H
