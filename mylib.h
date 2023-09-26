#include <iostream>
#include <iomanip> //isvedimui
#include <string>
#include <vector>
#include <cstdio>//lygiavimui su C komandomis
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;
using std::setw;//isvedamo objekto plotis
using std::fixed;//reliesiems sk. nes keicia formata
using std::left;//teksto lygiavimui pagal d ir k
using std::right;//-//-
using std::setprecision;//skaiciaus isvedimo tikslumui
using std::basic_string;

void outas() ;

struct studentas{
string vardas, pavarde;
int paz;
//int *paz2;//dinamiska atmintis
//vector<int> paz;
int egz;
float rezult;
};

studentas ivesk();