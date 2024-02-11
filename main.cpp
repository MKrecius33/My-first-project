#include "mylib.h"

int main() {
    vector<studentas> studentai; 
    studentas temp;
    char vmraide;
    float pasirinkimas;
    int studskaicius;
    char n;
    int egzpaz;
    vector<int> random_egzpaz;
    std::ofstream outfile("Studentai.txt");
    
    

    cout<<"Ar norite nuskaityti faila? t/n: ";
    cin>>n;
    cout<<"\n";
    if(n=='t'){ 
      studentas a = nuskaityk();
      studentai.push_back(a);
       }
    else{
      cout<<"Ar norite sugeneruoti atsitiktinius studentus? t/n: ";
      cin>>n;
      cout<<"\n";
      if(n=='n'){
      try {
          cout << "Keliu studentu duomenis norite ivesti?";
          cin >> studskaicius;

          if (cin.fail()) {
              throw std::invalid_argument("Neteisingas formatas. Galima ivesti tik skaiciu.");
          }
      } catch (const std::invalid_argument& e) {
          std::cerr << "Klaida: " << e.what() << std::endl;
          cout << "Iveskite studentu skaiciu: ";
          cin.clear(); 
          cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
          cin >> studskaicius; 
      }
      
      
    for (int i = 0; i < studskaicius; i++) {
        cout << "\nIveskite duomenis " << (i + 1) << "-ajam studentui:" <<      endl;
        studentas a = ivesk();
        studentai.push_back(a);
        
    }
      printResults(studentai, vmraide);
    }
        // generuoju faila su atsitiktiniais studentais ir pazymiais
    else {
      cout<<"Kiek studentu norite generuoti?: ";
      cin>>studskaicius;
      
      //srand(time(0));
      for (int i = 0; i <= studskaicius; i++) {
         int egzpaz = (rand() % 10) + 1;
         random_egzpaz.push_back(egzpaz);
      }

     
      
      
      outfile << left 
      << std::setw(15) << "Vardas" 
      << std::setw(15) << "Pavarde" 
      << std::setw(15) << "Galutinis (Vid)" << endl;
      outfile << "-----------------------------------------------" << endl;

      
      for (int i=1; i<=studskaicius; i = i + 1) {
        outfile 
          << std::setw(15) <<  "Vardas" + std::to_string(i) 
          << std::setw(20) << "Pavarde" + std::to_string(i) 
          << std::setw(8) <<  random_egzpaz[i] <<std::endl;
      }

      outfile.close();
      
      // Failo nuskaitymas ir naujo sukurimas
      /*
      string fnp;
      string fip;
      
      std::ifstream is;
      std::ofstream os;
      
      cout << "Iveskite nuskaitomu duomenu failo pavadinima\n"; 
      cin >> fnp;

      cout << "Iveskite naujo duomenu failo pavadinima\n"; 
      cin >> fip;
      
      is.open(fnp);

      if( is.fail( ) ) { 
       cout<<"Nera duomenu failo vardu "<< fnp <<endl; 
       system( "pause" ); 
       exit( -1 ); 
       }
       os.open( fip ); 
       if( os.fail( ) ) { 
       cout<<"Nepavyko atverti rezultatu failo vardu "<<fip<<endl; 
       system( "pause" ); 
       exit( -1 ); 
       }*/

      //string vardas, pavarde;
      //int galutinis;

      //is >> vardas >> pavarde >> galutinis;

      //os << "vardukas= " << vardas << "pavardele" << pavarde << "galutinis= " << galutinis << endl;
/*
      cout << "Debugging: Reading data from file..." << endl;
      while (is >> vardas >> pavarde >> galutinis) {
          cout << "Debugging: Read - Vardas: " << vardas << " Pavarde: " << pavarde << " Galutinis: " << galutinis << endl;
          os << "Vardas: " << vardas << " Pavarde: " << pavarde << " Galutinis: " << galutinis << endl;
      }

      is.close();
      os.close();
      cout << "Debugging: Finished writing to file." << endl;
      //system("pause");
     */
      // Reading student data from the file and creating two groups based on grades
      ifstream infile("Studentai.txt");
      if (!infile.is_open()) {
          cout << "Failed to open file for reading." << endl;
          return 1;
      }

      // Vectors to store student data for each group
      vector<string> group1_names, group2_names;
      vector<string> group1_surnames, group2_surnames;
      vector<int> group1_grades, group2_grades;

      string vardas, pavarde;
      int galutinis;

      while (infile >> vardas >> pavarde >> galutinis) {
          // Group students based on their grades
          if (galutinis > 5) {
              group1_names.push_back(vardas);
              group1_surnames.push_back(pavarde);
              group1_grades.push_back(galutinis);
          } else {
              group2_names.push_back(vardas);
              group2_surnames.push_back(pavarde);
              group2_grades.push_back(galutinis);
          }
      }

      infile.close();

      // Write group 1 to file
      std::ofstream outfile1("Group1.txt");
      if (!outfile1.is_open()) {
          cout << "Failed to open Group1.txt for writing." << endl;
          return 1;
      }

      outfile1 << std::setw(15) << "Name" << std::setw(15) << "Surname" << std::setw(10) << "Grade" << endl;
      for (size_t i = 0; i < group1_names.size(); ++i) {
          outfile1 << std::setw(15) << group1_names[i] << std::setw(15) << group1_surnames[i] << std::setw(10) << group1_grades[i] << endl;
      }
      outfile1.close();

      // Write group 2 to file
      std::ofstream outfile2("Group2.txt");
      if (!outfile2.is_open()) {
          cout << "Failed to open Group2.txt for writing." << endl;
          return 1;
      }

      outfile2 << std::setw(15) << "Name" << std::setw(15) << "Surname" << std::setw(10) << "Grade" << endl;
      for (size_t i = 0; i < group2_names.size(); ++i) {
          outfile2 << std::setw(15) << group2_names[i] << std::setw(15) << group2_surnames[i] << std::setw(10) << group2_grades[i] << endl;
      }
      outfile2.close();

      cout << "Files Group1.txt and Group2.txt created successfully." << endl;


    }

    return 0;

}}