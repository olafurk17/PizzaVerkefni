#include "../../include/UI/SalesUI.h"

SalesUI::SalesUI()
{
    //ctor
}

void SalesUI::sales(){
    bool running = true;
    char selection;
    while (running == true){
        cout << endl << "  -SALES-" << endl << endl;
        cout << "n : New Order" << endl;
        cout << "v : View Active Orders" << endl;
        cout << "c : Change Order" << endl;
        cout << "r : Return" << endl;

        cin >> selection;

        if(selection == 'n'){
            clear_screen();
            new_order();
        }
        else if(selection == 'v'){
            clear_screen();

        }
        else if(selection == 'c'){
            clear_screen();

        }
        else if(selection == 'r'){
            clear_screen();
            running = false;

        }
    }
}

void SalesUI::clear_screen(){

    for(int i = 0; i < 30; i++){
        cout << endl;
    }
}

void SalesUI::new_order()
{

    // Kalla í pizzuval til að velja pizzu í order
    // Pizzuval sækir vector af pizzum og prentar á sk´ja
    // Notandi velur pizzu af lista ( PizzaMenu object )

    // Kalla í location val til að velja staðsetningu
    // location val sækir vector af location og prentar
    // Notandi velur location ( Workplace object

    // Spyrja hvort pöntun sé sótt eða send ( bool delivery )

    // Finna út verð, skrifa út og skrifa í order ( int price )

    // Merkja hvort pöntun sé greidd ( bool paid )

    // Búa til order ( Order order() ) með öllu inniföldu

    // Senda order niður í Service klasa sem sendir í Repo og skrifar í skjal.
}
