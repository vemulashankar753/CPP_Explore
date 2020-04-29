#include <iostream>
#include <string>

using namespace std;

enum SfpState {
   "unknown",
    "notInstalled",
    "installed",
    "faulty",
    "operational",
    "enabled",
    "disabled",
    "invalidCcBase",
    "invalidCcExt" 
};

int main(){

  std::string state {};

  for(int i=0;i<10;i++){
     state.append((SfpState)i);
  }

  cout << state << endl;

  return 0;

} 

