#ifndef MAINUI_H
#define MAINUI_H
#include "ManagementUI.h"
#include "SalesUI.h"
#include "KitchenUI.h"
#include "DeliveryUI.h"


class MainUI
{
    public:
        MainUI();
        void main();
        void management();
        void sales();
        void kitchen();
        void delivery();
        void clear_screen();


    private:
        ManagementUI mainM;
        SalesUI mainS;
        KitchenUI mainK;
        DeliveryUI mainD;
};

#endif // MAINUI_H
