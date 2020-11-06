#include <iostream>
#include <memory>
#include <string>

using namespace std;

class refcount{

   private:
    unsigned int i;
   public:

     refcount():i(0){
      
     }
     void increment(){
       ++i;
     }
     void decrement(){
       --i;
     }

    unsigned int getRefcount(){
      return i;
    }
   ~refcount(){
     cout << "Destrucotr of hte refcount is called" << endl;
   }

};
    
     

template <typename T>
class smart_ptr{

  private:
   T* t;
   refcount *ref;
  
  public:
   smart_ptr(T* t1):t(t1){
      cout << "shared ptr object is created" << endl;
      ref = new refcount();
      ref->increment();
   }

  ~smart_ptr(){
     cout << "destructor is called" << endl;
     ref->decrement();
     if(ref->getRefcount() == 0){
        cout << "Entered getcount zero" << endl;
        delete ref;
     } 
//     delete t;
   }

   smart_ptr(const smart_ptr<T>& source){
      cout << "Copy constructor is called" << endl;
      
      t = source.t;
      ref = source.ref;
      ref->increment(); 
   
      
   }

    unsigned int getUsecount(){
        return ref->getRefcount();
    }     

    T& operator*() const{
      return *t;
    }

    T* operator->() const{
       return t;
    }

};

int main(){

    smart_ptr<int> s1(new int(10));
    cout <<     s1.getUsecount() << endl;
    smart_ptr<int> s2 = s1;
    cout <<     s2.getUsecount() << endl;

}

 
