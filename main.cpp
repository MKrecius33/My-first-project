#include "mylib.h"

//veikia su namu darbu sk = n
int main() {
    vector<studentas> studentai; 
    studentas temp;
    char vmraide;
    float pasirinkimas;
    int studskaicius;

    cout << "Keliu studentu duomenis norite ivesti?";
    cin >> studskaicius;

  
    for (int i = 0; i < studskaicius; i++) {
        cout << "\nIveskite duomenis " << (i + 1) << "-ajam studentui:" <<      endl;
        studentas a = ivesk();
        studentai.push_back(a);
        
    }
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
    
    cout
      <<setw(15)<<left<<studentai[i].var
      <<setw(15)<<left<<studentai[i].pav
      <<setw(15)<<left<<pasirinkimas
      <<endl;
    }
    return 0;

}

