#include <iostream>
#include <string>

using namespace std;

class Deep{

 private:
   int *data;

 public:
    Deep(int d){

     data = new int;

     *data = d;

    }

    //This is how in copy constructor also new memory is allocated for a pointer
    Deep(const Deep &source)
      :Deep(*source.data){

     cout << "Copy constructor is called" << endl;
    }

    ~Deep(){
      delete data;
      cout << "destructor is called" << endl;
    }

    int getData(){

      return *data;
    }

    void  setData(int d){
      *data = d;
    }

};

void displaydata(Deep &s){

   cout << "teh value of data is :" << s.getData() << endl;

}

    

int main(){

  Deep d {1000};
  displaydata(d);


  d.setData(200);
  displaydata(d);


  Deep d2 {d};
  displaydata(d2);
  cout << "main is done" << endl;

 
  return 0; 

}
        


  
