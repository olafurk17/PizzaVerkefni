#include "OrderRepo.h"

OrderRepo::OrderRepo()
{
    //ctor
}

void OrderRepo::readin_vector(string line){
    string property = "";
    vector<string> properties;
    for (unsigned int i = 0; i < line.length(); i++) {
        if (line[i] == ','){
             properties.push_back(property);
            property = "";
        }
        else {
            property += line[i];
        }

    }
    for(size_t i = 0; i < properties.size(); i++){
        cout << properties[i] << endl;

    }

}

void OrderRepo::read(){

    ifstream fin;
    string str;
    fin.open("activeorders.txt");

    if (fin.is_open()){
            while (getline(fin, str)){
                    readin_vector(str);

            }

        fin.close();
    }
    else{

        cout << "can not write in file, file is closed" << endl;
    }
}



//void read(vector<Order>& order_vector)
//{
    /*ifstream fin;
    string str;
    fin.open("activeorders.txt");


    if (fin.is_open()){
            while (!fin.eof()){
                getline(fin,str, ',');
                Order order();
                order_vector.push_back(order);
            }

        fin.close();
        toppingVector.pop_back();
    }
    else{

        cout << "can not write in file, file is closed" << endl;
    }*/
//}

void OrderRepo::write(Order& order)
{
    ofstream fout;
    fout.open("activeorders.txt", ios::app);
    if(fout.is_open()){
        fout << order << endl;
    }
    fout.close();
}
