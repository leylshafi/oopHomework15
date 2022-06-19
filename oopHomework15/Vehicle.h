#pragma once
class Vehicle
{
public:
    size_t id;
    string model;
    string vendor;
    Engine engine;

    Vehicle()
        :id(), model(), vendor(), engine() {}

    Vehicle(size_t id, string model, string vendor, Engine engine)
    {
        this->id = id;
        this->model = model;
        this->vendor = vendor;
        this->engine = engine;
    }

    void print()
    {
        cout << "Id: " << id << endl
            << "Model: " << model << endl
            << "Vendor: " << vendor << endl << endl
            << "=Engine= " << endl;
        engine.print();
        cout << "=====" << endl;
        cout << endl;
    }
};

class Car :public Vehicle
{
public:
    bool hasSpoiler;

    Car()
        :hasSpoiler() {}

    Car(bool hasSpoiler, size_t id, string model, string vendor, Engine engine)
        :Vehicle(id, model, vendor, engine)
    {
        this->hasSpoiler = hasSpoiler;
    }
    void print()
    {
        Vehicle::print();
        cout << "Has Spoiler: " << hasSpoiler << endl;
    }

};

class Ship :public Vehicle
{
public:
    bool hasSail;

    Ship()
        :hasSail() {}

    Ship(bool hasSail, size_t id, string model, string vendor, Engine engine)
        :Vehicle(id, model, vendor, engine)
    {
        this->hasSail = hasSail;
    }
    void print()
    {
        Vehicle::print();
        cout << "Has Sail: " << hasSail << endl;
    }

};


class Airplane : public Vehicle
{
public:
    size_t engineCount;
    size_t passengerCapacity;

    Airplane()
        :engineCount(), passengerCapacity() {}

    Airplane(size_t engineCount, size_t passengerCapacity, size_t id, string model, string vendor, Engine engine)
        :Vehicle(id, model, vendor, engine)
    {
        this->engineCount = engineCount;
        this->passengerCapacity = passengerCapacity;
    }

    void print()
    {
        Vehicle::print();
        cout << "Engine Count: " << engineCount << endl
            << "Passenger Capacity: " << passengerCapacity << endl;
    }
};