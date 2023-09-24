#include "mylib.h"

struct duomuo{
string vardas, pavarde;
//int paz[20];
//int *paz2;//dinamiska atmintis
vector<int> paz;
int egz;
double rezult;
};

int main() {
  vector <duomuo> studentai;
   duomuo temp;
   cout<<"Ivesk varda: ";
   cin>> temp.vardas;

  studentai.push_back(temp);

  for (auto &laik: studentai)
    cout<<laik.vardas<<endl;
  outas();
}

