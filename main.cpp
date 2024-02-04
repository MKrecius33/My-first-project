#include "mylib.h"
//generuoja atsitiktinius namu darbus
//veikia su namu darbu sk = n, bet ne su break funckija
/*
int main() {
    vector<studentas> studentai; 
    studentas temp;
    char vmraide;
    float pasirinkimas;
    int studskaicius;
    char n;

    cout<<"Ar norite nuskaityti faila?: ";
    cin>>n;
  
    if(n=='t'){
      studentas a = nuskaityk();
      studentai.push_back(a);
    } 
    else{
    cout << "Keliu studentu duomenis norite ivesti?";
    cin >> studskaicius;

  
    for (int i = 0; i < studskaicius; i++) {
        cout << "\nIveskite duomenis " << (i + 1) << "-ajam studentui:" <<      endl;
        studentas a = ivesk();
        studentai.push_back(a);
        
    }}
    cout<<"\n";
    cout << "Jei norite matyti galutini vidurkio bala spauskite v, jei medianos,\nspauskite m: "<< endl;
    cin >> vmraide;
      
    printf("\n%-15s%-15s%-15s\n",
      "Vardas","Pavarde","Galutinis (Vid) / Galutinis (Med)");
    printf("------------------------------------------------------------       \n");
    
    for (int i = 0; i < studentai.size(); i++) {
      if(vmraide=='v'){
        pasirinkimas = studentai[i].galut;
      } else { pasirinkimas = 999;};
      
    printf("%-15s%-15s%-15.2f\n", studentai[i].var.c_str(),                    studentai[i].pav.c_str(),pasirinkimas);
    
    }
    return 0;

}
*/

int main() {
    vector<studentas> studentai; 
    studentas temp;
    char vmraide;
    float pasirinkimas;
    int studskaicius;
    char n;
    

    cout<<"Ar norite nuskaityti faila?: ";
    cin>>n;
  
    if(n=='t'){ 
      studentas a = nuskaityk();
      studentai.push_back(a);
       }
    else{
    cout << "Keliu studentu duomenis norite ivesti?";
    cin >> studskaicius;

  
    for (int i = 0; i < studskaicius; i++) {
        cout << "\nIveskite duomenis " << (i + 1) << "-ajam studentui:" <<      endl;
        studentas a = ivesk();
        studentai.push_back(a);
        
    }
      printResults(studentai, vmraide);
    }
    //cout<<"\n";
  
   // cout << "Jei norite matyti galutini vidurkio bala spauskite v, jei medianos,\nspauskite m: "<< endl;
    //cin >> vmraide;

  /*
    printf("\n%-15s%-15s%-15s\n",
      "Vardas","Pavarde","Galutinis (Vid) / Galutinis (Med)");
    printf("------------------------------------------------------------       \n");
    
   for (int i = 0; i < studentai.size(); i++) {
      if(vmraide=='v'){
        pasirinkimas = studentai[i].galut;
      } else { pasirinkimas = mediana(studentai[i].paz);};
      
    printf("%-15s%-15s%-15.2f\n", studentai[i].var.c_str(),                    studentai[i].pav.c_str(),pasirinkimas);
   
   }
    */
    //printResults(studentai, vmraide);
  
    return 0;

}