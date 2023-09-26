#include "mylib.h"


// veikia vienam studentui
int main() {
  studentas a;
  char c;
  do{
  a=ivesk();
  cout<<"Ar norite ivesti kita studenta?: t/n\n";
  cin>>c; 
  }while (c!='n');
  cout<<endl<<a.var<<" "<<a.pav<<" Galutinis (Vid.) "<<a.galut<<endl;
return 0;
}

