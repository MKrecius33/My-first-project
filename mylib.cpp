#include "mylib.h"

/*
  studentas ivesk (){
  studentas temp;
  cout<<"Iveskite studento varda: ";
  cin>>temp.var;
  cout<<"Iveskite studento pavarde: ";
  cin>>temp.pav;
  cout<<"Iveskite namu darbu pazymi: ";
  cin>>temp.paz;
  cout<<"Iveskite egzamino pazymi: ";
  cin>>temp.egz;
  return temp;
}*/

//veikia su namu darbu sk = n, bet ne su break funckija
studentas ivesk (){
  int pazskaicius;
  char c;
  int n;
  double x[100];
  double s=0;
  float k=0;
  studentas temp;
  cout << "Iveskite studento varda: ";
  cin >> temp.var;
  cout << "Iveskite studento pavarde: ";
  cin >> temp.pav;
  cout<<"Ar norite atsitiktinai generuoti pazymius? t/n\n";
  cin>>c;
  
  if(c=='t'){
    cout<<"Kiek namu darbu pazymiu norite generuoti?\n";
    cin>>n;
    srand(time(0));
      for (int i = 0; i < n; i++) {
        int atsitiktiniai = (rand() % 10) + 1;
        temp.paz.push_back(atsitiktiniai);}
      for (int i = 0; i < 1; i++) {
         temp.egz = (rand() % 10) + 1;
      }
    
        }
  else { 
    {cout << "Iveskite egzamino pazymi: ";
    cin >> temp.egz;
      
  do{ 
    cout<<"Iveskite namu darbu pazymi/ius: \n";
    cin >> n;
    temp.paz.push_back(n);
    cout<<"Ar norite ivesti kita namu darbu pazymi?: t/n\n"; 
    cin>>c;
    
  } while (c !='n');}}

  double sum = 0.0;
  for (int i = 0; i < temp.paz.size(); i++) 
    {sum += temp.paz[i];}
    temp.galut = (sum / temp.paz.size()) * 0.4 + temp.egz * 0.6;
  

  return temp;
}
