#include <list>
#include <map>
#include <iostream>

using namespace std;

struct student {
   int  roll;
   string name;
};

//std::map<int,student *> smap;
std::list<student *> sl;

int main(){

   student *s1  = new student{1,"shan"};
   student *s2  = new student{2, "shan2"};
  
 //  smap[1] = s1;
 //  smap[2] = s2;

   sl.push_back(s1);
   sl.push_back(s2);

   cout << "the size of hmap is" << sl.size() << endl;

   student *s3;

   for(std::list<student *>::iterator it = sl.begin(); it != sl.end(); it++){

    s3 = *it;
    cout << "the value of the student are " << s3->roll << " the name is: " << s3->name << endl;
   }
 //  std::list<student *> sl;
//   for (st
   
   return 0;
}



   
