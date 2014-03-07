//
//  Customer.h
//  project 8
//
//  Created by Josh Sarath on 11/7/13.
//  Copyright (c) 2013 Josh Sarath. All rights reserved.
//

#ifndef __project_8__Customer__
#define __project_8__Customer__

#include <iostream>
using namespace std;

class Customer
{
private:
    string lName;
    string fName;
    string preference;
    long maxAmount;
public:
    void setLast(string);
    string getName();
    void setFirst(string);
    string getPreference();
    void setPreference(string);
    long getMaxAmount();
    void setMaxAmount(long);
};
istream & operator >> (istream &, Customer &);
#endif /* defined(__project_8__Customer__) */
