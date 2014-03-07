//
//  Automobile.h
//  project 8
//
//  Created by Josh Sarath on 11/4/13.
//  Copyright (c) 2013 Josh Sarath. All rights reserved.
//

#ifndef project_8_Automobile_h
#define project_8_Automobile_h

#include <iostream>
using namespace std;

class Automobile
{
private:
    string make;
    string bodyStyle;
    string color;
    int cylinders;
    long cityMileage;
    long distanceMileage;
    long dealerCost;
    long manufacturersPrice;
public:
    Automobile(string =" ", string =" ", string =" ", int=0, long=0, long=0, long=0, long=0);
    string getMake();
    string getBodyStyle();
    string getColor();
    int getCylinders();
    long getCityMileage();
    long getDistanceMileage();
    long getDealerCost();
    long getManufacturersPrice();
};




#endif
