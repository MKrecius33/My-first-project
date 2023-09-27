#include "mylib.h"

//lygiavimas sutvarkytas
int main() {
    vector<studentas> studentai; 

    int studskaicius;

    cout << "Keliu studentu duomenis norite ivesti? ";
    cin >> studskaicius;

  
    for (int i = 0; i < studskaicius; i++) {
        cout << "Iveskite duomenis " << (i + 1) << "-ajam studentui:" << endl;
        studentas a = ivesk();
        studentai.push_back(a);
    }

    
    printf("%-20s%-20s%-20s\n","Vardas","Pavarde","Galutinis (Vid)");
    printf("------------------------------------------------------------\n");
    //cout << "Vardas: " << "Pavarde: " << "Galutinis Vid" <<endl;
    for (int i = 0; i < studentai.size(); i++) {
        
    
    //cout<<studentai[i].var<<studentai[i].pav<<studentai[i].galut << endl;
    cout
      <<setw(20)<<left<<studentai[i].var
      <<setw(20)<<left<<studentai[i].pav
      <<setw(20)<<left<<studentai[i].galut
      <<endl;
    }
    return 0;

}
