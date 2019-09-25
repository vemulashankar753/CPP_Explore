#include <iostream>
#include <string>
#include <vector>

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

    Deep(Deep &&source) noexcept 
     :data(source.data){
     source.data = nullptr;
     cout << "Move constructor is called" << endl;
    }

    ~Deep(){
      if (data != nullptr){
        cout << "destructor is called" << *data << endl;
      }else{
        cout << "destructor is called"  << endl;
      }
      delete data;
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

// Without the move constructor
int main(){

  Deep d {1000};
//  displaydata(d);

  d.setData(200);
//  displaydata(d);

  Deep d2 {d};
//  displaydata(d2);
  cout << "main is done" << endl;

  std::vector<Deep> v1;

//  v1.emplace_back( Deep {10});
//  v1.emplace_back(Deep {20});
  v1.push_back(Deep {10});
  v1.push_back(Deep {20});
  return 0; 

}
        


  
