#include <iostream>
#include<vector>
using namespace std;
#include"Engine.h"
#include"Vehicle.h"
#include"VehicleDepo.h"

int main()
{
    cout << boolalpha;
    VehicleDepo v;
    Car c(true, 1, "model", "vendor", { 1,"company",3.4 });
    Car c2(false, 2, "model2", "vendor2", { 2,"company2",3.5 });
    Airplane a(5, 1000, 2, "modelA", "vendorA", { 3,"companyA",6.5 });
    Ship s(true, 2, "modelShip", "vendorShip", { 5,"companyShip",7.3 });
    v.cars.push_back(c);
    v.airplanes.push_back(a);
    v.ships.push_back(s);
    v.cars.push_back(c2);
    v.showAllVehicle();
}


