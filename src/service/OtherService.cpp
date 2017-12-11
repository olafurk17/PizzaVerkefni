#include "OtherService.h"


OtherService::OtherService(){
    //ctor
}

void OtherService::saveSoda(Other& other){

    repo.saveSoda(other);
}

void OtherService::saveBread(Other& other){

    repo.saveBread(other);
}

void OtherService::saveDessert(Other& other){

    repo.saveDessert(other);
}

