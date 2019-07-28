#include <iostream>
#include <string>

using namespace std;

struct book{

  int a;
  string name;
  string author;

};

int main(){

  book b1;
  cout << "a " << b1.a << " name: " << b1.name << " author: " << b1.author << endl;

  book *b2;

  b2 = (book *)malloc(sizeof(book));

  cout << "a " << b2->a << " name: " << b2->name << " author: " << b2->author << endl;

  return 0;

} 
