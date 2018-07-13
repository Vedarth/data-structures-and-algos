#ifndef LINKAGE_H
#define LINKAGE_H

#include

class Linkage{

public:
//This is the class constructor
Linkage(double L, double P, double Q, double S);
//returns length of the longest link
double getLongest();
//returns length of the first intermediate link
double getP();
//returns length of the second intermediate link
double getQ();
//returns length of the shortest link
double getShortest();
//returns the type of motion (ie, crank rocker, triple rocker, change point)
std::string Motion();

//sets longest length
void setLongest(double L);
//sets first intermediate length
void setP(double P);/** updated      **/
//sets second intermediate length
void setQ(double Q);/** updated      **/
//sets shortest length
void setShortest(double S);

private:
static const std::string triple;
static const std::string crank;
static const std::string change;
double longest_length_L;
double intermediate_length_P;
double second_length_Q;
double shortest_length_S;



};

#endif
