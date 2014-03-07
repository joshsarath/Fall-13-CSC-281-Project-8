//
//  Automobile.cpp
//  project 8
//
//  Created by Josh Sarath on 11/4/13.
//  Copyright (c) 2013 Josh Sarath. All rights reserved.
//

#include "Automobile.h"
using namespace std;

Automobile::Automobile(string m, string b, string c, int cy, long mile, long dist, long cost, long price)
{/*
  constructor for class automobile
  this takes inputs of all info about the automobile and sets the initialized private data members
  */
    make = m;
    bodyStyle = b;
    color= c;
    cylinders = cy;
    cityMileage = mile;
    distanceMileage = dist;
    dealerCost = cost;
    manufacturersPrice = price;
}

string Automobile::getMake()
{ //returns the make
    return make;
}
string Automobile::getBodyStyle()
{ //returns the body style
    return bodyStyle;
}
string Automobile::getColor()
{ //returns color
    return color;
}
int Automobile::getCylinders()
{ //returns number fo cylinders
    return cylinders;
}
long Automobile::getCityMileage()
{ //returns city mpg
    return cityMileage;
}
long Automobile::getDistanceMileage()
{ //returns highway mpg
    return distanceMileage;
}
long Automobile::getDealerCost()
{ //returns cost to dealer
    return dealerCost;
}
long Automobile::getManufacturersPrice()
{ //returns price to customer
    return manufacturersPrice;
}










