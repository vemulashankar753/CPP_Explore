#include <iostream>
#include <sys/time.h>
using namespace std;
int a(int m,int n) {
    if (m == 0) {
    cout << "m: entered" << m << endl;
    return n + 1;
    } else if (m > 0 and n == 0) {
    cout << "n: entered" << n << endl;
    return a(m-1,1);
    } else if (m > 0 and n > 0) {
    cout << "m,n: entered" << m << ": " << n << endl;
    return a(m-1,a(m,n-1));
    }
}

int main() {
    timeval tim;
    gettimeofday(&tim,NULL);
    double t1 = tim.tv_usec;
    int v = a(3,4);           
    gettimeofday(&tim,NULL);
    double t2 = tim.tv_usec;
    cout << v << endl << t2-t1;
    cout << "\n" << endl;
    return 0;
}      
