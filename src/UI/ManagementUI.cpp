#include "ManagementUI.h"

ManagementUI::ManagementUI()
{
    //ctor
}

void ManagementUI::mainMenu(){
    bool running = true;
    char selection;
    while (running == true){
        cout << endl << "  -MANAGEMENT-" << endl << endl;
        cout << "t : Register Toppings" << endl;
        cout << "m : Register Menu items" << endl;
        cout << "s : Register Sizes" << endl;
        cout << "p : Register Prices" << endl;
        cout << "l : Register Locations" << endl;
        cout << "r : Return" << endl;

        cin >> selection;

        if(selection == 't'){
            clear_screen();

            Toppings toppings;
            toppings.startRegester(toppings);
            clear_screen();

        }
        else if(selection == 'm'){
            clear_screen();
            PizzaMenu pizza;
            pizza.startRegester(pizza);

        }
        else if(selection == 's'){
            clear_screen();

        }
        else if(selection == 'p'){
            clear_screen();

        }
        else if(selection == 'l'){
            clear_screen();
            workplaces reg;
            reg.start_register();
        }
        else if(selection == 'r'){
            clear_screen();
            running = false;

        }
    }
}

void ManagementUI::clear_screen(){

    for(int i = 0; i < 30; i++){
        cout << endl;
    }
}
