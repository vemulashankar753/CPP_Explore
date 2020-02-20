#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
   string s1 {s};
    s1.reserve(n);

/*   if (s1.length() == 1 && s1.length() <n){
       char ch = s[0];

//       string s2 {n, ch};
 //      s1 =s2;
       cout << "s1 length() is" << s1.length() << "ch is:" << ch <<  endl;
   } */
    while (s1.length() < n){
     s1 = s1+s;
      if (s1.length() > n){
          s1 = s1.substr(0,n);
          break;
      }
    }

    //cout <<"length of s is " << s1.length() << s1 << endl;
    long l = 0;
    long  l1 =0;
    
    while(s1.length()){
        int l = s1.find(s[0]);
        if(l != std::string::npos){
            l1++;
            s1 = s1.substr((l+1),n);
           // cout << "l1 value:" << l1 << "s1 string:" << s1 << endl;
        }    
    }

    return l1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);


    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout <<sizeof(long) << endl;

    long result = repeatedString(s, n);

    cout << "result value: " << result << endl;

    fout << result << "\n";

    fout.close();

    return 0;
}

