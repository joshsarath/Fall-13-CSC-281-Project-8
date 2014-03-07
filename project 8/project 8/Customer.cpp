//
//  Customer.cpp
//  project 8
//
//  Created by Josh Sarath on 11/7/13.
//  Copyright (c) 2013 Josh Sarath. All rights reserved.
//

#include "Customer.h"
using namespace std;

string Customer::getName()
{/*
  combines the first and last names to return the full name
  */
    string name;
    name = fName +" "+ lName;
    return name;
}
void Customer::setLast(string last)
{ //sets the private data member last name
    lName = last;
}
void Customer::setFirst(string first)
{ //sets the first name
    fName = first;
}
string Customer::getPreference()
{ //return customer preference
    return preference;
}
void Customer::setPreference(string choice)
{ //sets private data member of preference
    preference = choice;
}
long Customer::getMaxAmount()
{ //returns customer budget
    return maxAmount;
}
void Customer::setMaxAmount(long budget)
{ //sets the budget for customer 
    maxAmount = budget;
}
istream & operator >> (istream & is, Customer & cu)
{   //free function for extracting BankAccount objects
	//from input streams like this cin >> a;
	
	string last;
    string first;
    string choice;
    long budget;
	
	is >> last >> first >> choice >> budget;
	is.ignore(72, '\n'); // flush anything else on the same line
    cu.setLast(last);
    cu.setFirst(first);
    cu.setPreference(choice);
    cu.setMaxAmount(budget);
	return is;
	//use member functions…
}

