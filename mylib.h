#include <iostream>
#include <iomanip> //isvedimui
#include <string>
#include <vector>
#include <cstdio>//lygiavimui su C komandomis
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <sstream> 
#include <limits>
//#include <boost/algorithm/string.hpp>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;
//using std::setw;//isvedamo objekto plotis
using std::fixed;//reliesiems sk. nes keicia formata
using std::left;//teksto lygiavimui pagal d ir k
using std::right;//-//-
using std::setprecision;//skaiciaus isvedimo tikslumui
using std::basic_string;
using std::ifstream;
using std::istringstream;





struct studentas{
string var;
string pav;
vector<int> paz;
int egz;
float galut;
};

studentas ivesk();
studentas nuskaityk();
float mediana(vector<int> paz);
void printResults(const vector<studentas>& studentai, char vmraide);

