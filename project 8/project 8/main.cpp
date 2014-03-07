//
//  main.cpp
//  project 8
//
//  Created by Josh Sarath on 11/4/13.
//  Copyright (c) 2013 Josh Sarath. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
#include "Automobile.h"
#include "Customer.h"

Automobile match(Customer, Automobile[]);

int main()
{
    /* this part of the code establishes the automobile array
    a car object is created using name car1-car5 and then placed manually in the array cars
     */
    Automobile cars[6]; //initializes array
    Automobile car("Buick", "sedan", "black", 8, 10, 13, 12000, 18500); //car 1
    cars[0]= car; //car 1 placed in array
    Automobile car1("Volvo", "wagon", "blue", 4, 20, 24, 14000, 22000);
    cars[1]=car;
    Automobile car2("Toyota", "truck", "tan", 4, 22, 27, 7800, 12000);
    cars[2]=car2;
    Automobile car3("Ford", "truck", "white", 4, 21, 25, 6500, 10000);
    cars[3]= car3;
    Automobile car4("Mercedes", "sedan", "green", 6, 15, 19, 35000, 51000);
    cars[4]=car4;
    Automobile car5("Ford", "SUV", "maroon", 6, 16, 20, 21000, 32000);
    cars[5]=car5;
    /*
     this section will test the accessor functions
     I was unable to create a separate function to call because i had trouble passing an arry as a parameter
     */
    cout<< cars[0].getMake()<<"\n";
    cout<< cars[1].getBodyStyle()<<"\n";
    cout<< cars[2].getColor()<<"\n";
    cout<< cars[3].getCylinders()<<"\n";
    cout<< cars[4].getCityMileage()<<"\n";
    cout<< cars[5].getDistanceMileage()<<"\n";
    cout<< cars[0].getDealerCost()<<"\n";
    cout<< cars[1].getManufacturersPrice()<<"\n";
    
    
    ifstream file;
    Customer customers[18];
    
    file.open("customer.txt");
    for(int i=0; i<18; i++)
    {
        file >> customers[i];
        Automobile answer;
        answer = match(customers[i], cars);
        cout<<customers[i].getName()<< " is matched with "<<answer.getMake()<<"\n";

    }
    }
Automobile match(Customer cust, Automobile ca[])
{
    /*
     this function accepts a customer and the array of cars
     if tests the customer against each car checking first for car make match
     if car make matches or is any, then tests if customer can afford it
     function will return a match if any, or a noMatch automobile defined in the function
     */
    Automobile match; //initialize match automobile for return
    Automobile noMatch("No Match", "No Match", "No Match", 0, 0, 0, 0, 0);//defines a class instance in case of no match found
    for (int i =0; i<6; i++)
    {
        if (cust.getPreference() == ca[i].getMake() ||cust.getPreference()=="any") //if preference equals body type or if preference is "any"
        {
            if (cust.getMaxAmount() >= ca[i].getManufacturersPrice()) // if car is within customers budget
            {
                match = ca[i];
                return match;//returns the matched car to customer
            }
        }
    }
    return noMatch;
}
