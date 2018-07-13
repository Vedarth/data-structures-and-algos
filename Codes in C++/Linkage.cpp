//Linkage.cpp is below this comment
#include
#include "Linkage.h"

using namespace std;

const std::string Linkage::triple = "This pinned four-bar linkage is a triple rocker .";
const std::string Linkage::crank = "This pinned four-bar linkage is a crank rocker .";
const std::string Linkage::change = "This pinned four-bar linkage is a change-point linkage.";


Linkage::Linkage(double L, double P, double Q, double S)
{
std::cout << "Linkage Constructor was called" << std::endl;
this->longest_length_L = L;
this->intermediate_length_P = P;
this->second_length_Q = Q;
this->shortest_length_S = S;
}


double Linkage::getLongest()
{
std::cout << "Called getLongest method" << std::endl;
return this->longest_length_L;
}

void Linkage::setLongest(double L)
{
std::cout << "Called setLongest method" << std::endl;
this->longest_length_L = L;

}
