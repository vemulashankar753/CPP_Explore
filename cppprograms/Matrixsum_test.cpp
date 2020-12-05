#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Matrix{
    public:
    vector<vector<int>> a;
    Matrix(){
        
    }
    ~Matrix(){
        
    }
    Matrix operator+(const Matrix& m){
        Matrix c;
        for(int i=0;i<m.a.size();i++){
            vector<int> x; 
            for(int j=0;j<m.a[i].size();j++){
               int e = m.a[i][j]+this->a[i][j];
               cout << "Elements are: " << e;
               x.push_back(e);
            }
            c.a.push_back(x);
        }
        return c;
    }
    
};
int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      } 

      result = x+y;
      cout << "Inputting is done" << endl;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << x.a[i][j] << endl;
         }
      }
   }  
   return 0;
}

