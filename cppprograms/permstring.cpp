// C++ program to print all  
// permutations with duplicates allowed  
#include <iostream> 
using namespace std; 

void interch(char &ch1, char &ch2){
   char temp;
   temp = ch1;
   ch1 = ch2;
   ch2 = temp;
};
  
  
// Function to print permutations of string  
// This function takes three parameters:  
// 1. String  
// 2. Starting index of the string  
// 3. Ending index of the string.  
void permute(string a, int l, int r)  
{  
    // Base case  
    if (l == r)  
        cout<<a<<endl;  
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
            cout << "Before interch1" << endl;  
            // interchping done  
            interch(a[l], a[i]);  
  
            // Recursion called  
            permute(a, l+1, r);  
  
            cout << "Before interch2" << endl;  
            //backtrack  
            interch(a[l], a[i]);  
        }  
    }  
}  
  
// Driver Code  
int main()  
{  
    string str = "ABC";  
    int n = str.size();  
    permute(str, 0, n-1);  
    return 0;  
}  
  
