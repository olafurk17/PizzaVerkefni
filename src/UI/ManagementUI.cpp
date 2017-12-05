#include "../../include/UI/ManagementUI.h"

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
            register_toppings();
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
            register_location();
        }
        else if(selection == 'r'){
            clear_screen();
            running = false;

        }
    }
}

void ManagementUI::register_location()
{
    char input = 'y';

    while (input == 'y'|| input == 'Y')
    {
        WorkplacesRepo workplaceRepo;
        cout << "Enter a Location: ";
        cin >> workplaceRepo;
        workplaceRepo.save();

        cout << "Do you want to register more Locations? Type 'y' for yes or 'n' for no: ";
        cin >> input;
    }
}


void ManagementUI::register_toppings() {

    string toppings = "";
    char input = 'y';

    while (input == 'y'|| input == 'Y'){
        ToppingRepo toppingsRepo;
        cout << "Type the name of the topping: ";
        cin >> toppings;
        toppingsRepo.save();

        cout << "Do you want to regester more toppings type 'y' for yes or 'n' for no: ";
        cin >> input;

    }
}

void ManagementUI::clear_screen(){

    for(int i = 0; i < 30; i++){
        cout << endl;
    }
}
