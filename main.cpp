#include "mylib.h"



int main() {
  vector <studentas> studentai;
   studentas temp;
   cout<<"Ivesk varda: ";
   cin>> temp.vardas;

  studentai.push_back(temp);

  for (auto &laik: studentai)
    cout<<laik.vardas<<endl;
  outas();
}

