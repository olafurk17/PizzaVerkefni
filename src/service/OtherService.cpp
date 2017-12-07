#include "OtherService.h"


OtherService::OtherService(){
    //ctor
}

void OtherService::saveSoda(Other& other){

    repo.saveSoda(other);
}

void OtherService::saveBread(){

    repo.saveBread();
}

void OtherService::saveDessert(){

    repo.saveDessert();
}

