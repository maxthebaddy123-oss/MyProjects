#ifndef SCIENCE_H
#define SCIENCE_H
#include <iostream>
#include <cmath>

class Science {
    double Distance, Time, Resistance[1000], Mass1, Mass2, Radius;
    int n1;

    public:
    void getInfo1();
    void CalculateSpeed();

    void getInfo2();
    void CalculateResistance();

    void getInfo3();
    void CalculateGravity();

    void getInfo4();
    void ConvertAngle();
    void getInfo4_1();
    void CalculateRadius();

    void getInfo5();
    void ConvertPlanetAngle();
    void getInfo5_1();
    void CalculatePlanetMass();
};

#endif