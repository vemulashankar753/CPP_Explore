/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <vector>


using namespace std;
int main()
{
    vector<int> v;
    vector<vector<int>> qv;

    unsigned int q;
    cin >> q;

    for(int i= 0;i<q;i++){
        vector<int> sv;
        int q1;
        cin >> q1;
        sv.push_back(q1);
        if(q1 == 1){
            int ivalue;
            cin >> ivalue;
            sv.push_back(ivalue);
        }
        qv.push_back(sv);
    }

        for(vector<int>  sub: qv){
            cout << "entered innn loop: " <<  sub.size() << endl;
          /*  for(auto& i: sub){
                cout << i << " ";
            } */

            if(sub.size() == 2){
                if(sub.at(0) == 1){
                    v.push_back(sub.at(1));
                }
            }else if (sub.size() == 1){
                if(sub.at(0) == 2){
                  for(auto& i: v){
                      cout << i << " ";
                  }
                  cout << endl;
                }
            } 
        }
  
   return 0;

}


