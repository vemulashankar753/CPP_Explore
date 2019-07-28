#include <iostream>

using namespace std;

struct stud{
  int id;
  std::string name;
  int cl;
};

void printstd(stud st);
//   cout << "printing details of students" << st.id << ":" << st.name << ":" << st.cl << endl;
//}

int main(){

   stud st1, st2;

   stud *st3;

   st1.id = 1;
   st1.name = "shankar";
   st1.cl = 4;

   st2.id = 2;
   st2.name = "Madhavi";
   st2.cl = 4;

   st3->id = 3;
   st3->name = "Vrinda";
   st3->cl = 4; 

   stud st4;
  
   st4 = *st3;

   printstd(st1);
   printstd(st2);
   printstd(st4);

   return 0;
}
void printstd(stud st){
   cout << "printing details of students" << st.id << ":" << st.name << ":" << st.cl << endl;
}
