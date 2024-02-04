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
    {sum += temp.paz[i];
    cout << "Homework " << i + 1 << ": " << temp.paz[i] << endl;}
  
  cout << "Sum of homework: " << sum << endl;
  cout << "Exam grade: " << temp.egz << endl;
  
  temp.galut = (sum / temp.paz.size()) * 0.4 + temp.egz * 0.6;
  cout << "Galutinis: " << temp.galut << endl;

  return temp;
}

float mediana(vector <int> paz){
  sort(paz.begin(), paz.end());
  int n=paz.size()/2;
  if (paz.size()%2!=0)  return paz.at(n);
   else return ((paz.at(n)+paz.at(n+1))/2.0);
};

void printResults(const vector<studentas>& studentai, char vmraide) {
    cout << "Jei norite matyti galutini vidurkio bala spauskite v, jei medianos,\nspauskite m: "<< endl;
    cin >> vmraide;
    printf("\n%-15s%-15s%-15s\n",
        "Vardas", "Pavarde", "Galutinis (Vid) / Galutinis (Med)");
    printf("------------------------------------------------------------       \n");

    float pasirinkimas;
    for (int i = 0; i < studentai.size(); i++) {
        if (vmraide == 'v') {
            pasirinkimas = studentai[i].galut;
        } else {
            pasirinkimas = mediana(studentai[i].paz);
        };

        printf("%-15s%-15s%-15.2f\n", studentai[i].var.c_str(), studentai[i].pav.c_str(), pasirinkimas);
    }
}