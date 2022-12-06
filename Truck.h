#ifndef PERSON_H
#define PERSON_H
#include <string>
#include "ecs36b_Common.h"
#include "Automobile.h"
using namespace std;

class Truck : public Automobile {
    private:   
        string name;

    public:

        Truck(string n);

        Truck();

        void setName(string n);

        string getName();

        Json::Value dump2JSON();

        bool JSON2Object(Json::Value);
};
#endif