#include "mylib.h"

/*void outas() {
  int a;
  float b;
  double c;
  char simbolis;
  string zodis;
  cout<<"Ivesk namu darbu pazymi:"<<endl;
  cin >>a;
  cout<<"Ivesk egzamino pazymi: "
  cout << a << "; "<<endl;
}*/

studentas ivesk (){
  studentas temp;
  cout<<"Iveskite studento varda: ";
  cin>>temp.vardas;
  cout<<"Iveskite studento pavarde: ";
  cin>>temp.pavarde;
  //cout<<"Iveskite namu darbu pazymi: ";
  //cin>>temp.paz;
  cout<<"Iveskite egzamino pazymi: ";
  cin>>temp.egz;
  return temp;
}