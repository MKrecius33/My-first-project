#include "mylib.h"


int main() {
  float g;
  studentas a;
  cout<<"Iveskite varda: ";
  cin>>a.var;
  cout<<"Iveskite pavarde: ";
  cin>>a.pav;
  cout<<"Iveskite namu darbu pazymi: ";
  cin>>a.paz;
  cout<<"Iveskite egzamino pazymi: ";
  cin>>a.egz;
  g = a.paz*0.4+a.egz*0.6;
  cout<<endl<<a.var<<" "<<a.pav<<" Galutinis (Vid.) "<<g<<endl;
return 0;
}





//bandymas is knygos 4sk
/*int main() {
  string a,b;
  double x[100];
  int n;
  double s=0;
  float k=0;
  cout<<"Iveskite studento varda: ";
  cin>>a;
  cout<<"Iveskite studento pavarde: ";
  cin>>b;
  cout<<"Iveskite namu darbu pazymiu skaiciu: \n";
  cin>>n;
  cout<<"Namu darbu skaicius yra: "<<n<<endl<<endl;
  cout<<"Iveskite namu darbu pazymi/ius: \n";
  for(int i=0; i<n;i++){
    cout<<i+1<<" -aji pazymi ";
    cin>>x[i];
    cout<<"Ivestas "<<i+1<<" pazymis "<<x[i]<<endl;
    s+=x[i];
    k=s/n;
  }
  cout<<endl<<a<<" "<<b<<" Galutinis (Vid.) "<<k<<endl;
  return 0;*/
  
 /* cin>>e;
  float f = (c + d + e)/3.f;
  //cout<<a<<" "<<b<<" "<<c<<"; "<<d<<"; "<<e<<"; "<<"Rezultatas: "<<f.2;
  printf("%-20s%-20s%-3d%-3d%-3d%-10s%-5.2f","a","b",c,d,e,"Galutinis: ",f);
  return 0;
}*/
