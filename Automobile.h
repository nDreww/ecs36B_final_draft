#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H
#include <string>
#include "ecs36b_Common.h"

using namespace std;

class Automobile {
    private:   
        string model;
        double speed;
        double weight;

    public:

        Automobile(string n, double s, double w);

        Automobile();

        void setModel(string n);
        void setSpeed(double s);
        void setWeight(double w);

        string getModel();
        double getSpeed();
        double getWeight();

        Json::Value dump2JSON();

        bool JSON2Object(Json::Value);
};
#endif