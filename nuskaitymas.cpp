#include "mylib.h"

studentas nuskaityk(){
    char vmraide;
    float pasirinkimas;
    ifstream file("kursiokai.txt"); 

  
    studentas temp;
    vector<studentas> studentai; 

    string line;
    
    getline(file, line);

    while (getline(file, line)) {
        studentas temp;
        std::istringstream iss(line);

        if (!(iss >> temp.var >> temp.pav)) {
            cout << "Error: Unable to read 'var' and 'pav' from line." << endl;
            continue; 
        }

        int grade;
        while (iss >> grade) {
            temp.paz.push_back(grade);
        }

        
        if (!temp.paz.empty()) {
            temp.egz = temp.paz.back();
          
            double sum = 0.0;
            for (int i = 0; i < temp.paz.size(); i++) 
              {sum += temp.paz[i];}
              temp.galut = (sum / temp.paz.size()) * 0.4 + temp.egz * 0.6;
          
            temp.paz.pop_back(); 
        } else {
            cout << "Error: No grades found for 'egz'." << endl;
            continue; 
        }

        studentai.push_back(temp);
    }

    file.close(); 
    printResults(studentai, vmraide);
   /*
    cout<<"\n";
  
  cout << "Jei norite matyti galutini vidurkio bala spauskite v, jei medianos,\nspauskite m: "<< endl;
  cin >> vmraide;
      
    printf("\n%-15s%-15s%-15s\n",
      "Vardas","Pavarde","Galutinis (Vid) / Galutinis (Med)");
    printf("------------------------------------------------------------       \n");
  

  for (int i = 0; i < studentai.size(); i++) {
      if(vmraide=='v'){
        pasirinkimas = studentai[i].galut;
      } else { pasirinkimas = mediana(studentai[i].paz);
             };
      
    printf("%-15s%-15s%-15.2f\n", studentai[i].var.c_str(),                    studentai[i].pav.c_str(),pasirinkimas);
      
    }*/

    return temp;
}

