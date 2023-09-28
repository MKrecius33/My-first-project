#include "mylib.h"

//medianos funkcija strigo, bet pasirinkimas padarytas
int main() {
    vector<studentas> studentai; 
    studentas temp;
    char raide;
    float pasirinkimas;
    int studskaicius;

    cout << "Keliu studentu duomenis norite ivesti? ";
    cin >> studskaicius;

  
    for (int i = 0; i < studskaicius; i++) {
        cout << "Iveskite duomenis " << (i + 1) << "-ajam studentui:" <<      endl;
        studentas a = ivesk();
        studentai.push_back(a);
        
    }
    cout<<"\n";
    cout << "Jei norite matyti galutini vidurkio bala spauskite v, jei medianos, spauskite m: "<< endl;
    cin >> raide;
      
     
    printf("\n%-15s%-15s%-15s\n",
      "Vardas","Pavarde","Galutinis (Vid) / Galutinis (Med)");
    printf("------------------------------------------------------------       \n");
    
    for (int i = 0; i < studentai.size(); i++) {
        if(raide=='v'){
      pasirinkimas = studentai[i].galut;
    } else { pasirinkimas = 999;};
    
    cout
      <<setw(15)<<left<<studentai[i].var
      <<setw(15)<<left<<studentai[i].pav
      <<setw(15)<<left<<pasirinkimas
      <<endl;
    }
    return 0;

}

