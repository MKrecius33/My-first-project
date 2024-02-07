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
        istringstream iss(line);

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
   istringstream iss;
iss.str(line);


    return temp;
}

