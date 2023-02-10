#include <iostream>

using namespace std;


class car
{
private:
    string adjetive = "shiny";
public:
    string brand;
    
    string model;

    void brand_name();

    car(string brand_n, string model_n){
        brand = brand_n;
        model = model_n;
        
    }

};

void car::brand_name()
{
    cout << adjetive;
}




int main(){

    // car myCar;
    // myCar.brand = "BMW";
    // myCar.model =  "KYS";

    // myCar.brand_name();
    
    car ValentinasCar("Jeep","piss");

    cout << ValentinasCar.brand;

    
    

}