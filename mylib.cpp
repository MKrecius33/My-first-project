#include "mylib.h"

  /*studentas ivesk (){
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
  studentas ivesk (){
  char c;
  int n;
  double x[100];
  double s=0;
  float k=0;
  studentas temp;
  cout<<"Iveskite studento varda: ";
  cin>>temp.var;
  cout<<"Iveskite studento pavarde: ";
  cin>>temp.pav;
  cout<<"Iveskite egzamino pazymi: ";
  cin>>temp.egz;
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
      temp.galut=k*0.4+temp.egz*0.6;
  }
  return temp;
}