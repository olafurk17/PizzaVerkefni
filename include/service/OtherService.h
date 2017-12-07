#ifndef OTHERSERVICE_H
#define OTHERSERVICE_H
#include "OtherRepo.h"
#include "../models/Other.h"


class OtherService
{
    public:
        OtherService();
        void saveSoda(Other& other);
        void saveBread(Other& other);
        void saveDessert(Other& other);
        void printSoda();
        void printBread();
        void printDesert();

    private:
        OtherRepo repo;
};

#endif // OTHERSERVICE_H
