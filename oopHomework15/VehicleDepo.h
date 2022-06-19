#pragma once
class VehicleDepo
{
public:
    vector<Car>cars;
    vector<Ship>ships;
    vector<Airplane>airplanes;

    void showAllVehicle()
    {
        cout << "=====Cars===== " << endl;
        for (size_t i = 0; i < cars.size(); i++)
        {
            cars[i].print();
        }
        cout << endl;
        cout << "=====Airplanes=====" << endl;
        for (size_t i = 0; i < airplanes.size(); i++)
        {
            airplanes[i].print();
        }
        cout << endl;
        cout << "=====Ships=====" << endl;
        for (size_t i = 0; i < ships.size(); i++)
        {
            ships[i].print();
        }

    }
};