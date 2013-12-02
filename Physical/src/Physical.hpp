/*
 * Physical.hpp
 *
 *  Created on: Nov 29, 2013
 *      Author: skhalidy
 */

#ifndef PHYSICAL_HPP_
#define PHYSICAL_HPP_
#include <iostream>
#include <fstream>
using namespace std;

class Physical{
protected:
string gender;
int age;
string occupation, comment;

public:
Physical();
void annotation();
void P_test();
};

class UrineTest: public Physical{
protected:
string colour;
int pH;
float RBC;
float WBC;

public:
void UrineColour();
void pHvalue();
void RBCcount();
void WBCcount();
void displaya();
};

class VitalSigns: public Physical {
protected:
float temp;
int HR;
int RR;

public:
void temperature();
void heartrate();
void respiratoryrate();
void displayb();
};

class HEENT: public Physical{
protected:
string eyes;
string ears;
string nose;

public:
void lightexam();
void otoscopy();
void occlude();
void displayc();
};


#endif /* PHYSICAL_HPP_ */
