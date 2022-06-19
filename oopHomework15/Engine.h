#pragma once
class Engine
{
public:

    size_t engine_no;
    string company;
    double volume;

    Engine()
        :engine_no(), company(), volume() {}

    Engine(size_t engine_no, string company, double volume)
    {
        this->engine_no = engine_no;
        this->company = company;
        this->volume = volume;
    }

    void print() {
        cout << "Engine number: " << engine_no << endl
            << "Company: " << company << endl
            << "Volume: " << volume << endl;
    }
};