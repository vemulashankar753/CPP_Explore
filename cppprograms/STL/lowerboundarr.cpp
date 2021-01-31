#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int N;
        cout << "Enter value of N" << endl;
	cin >> N;
	int a[N];
        cout << "Enter values of array" << endl;
	for(int i=0;i<N;i++){
		int e;
		cin >> e;
		a[i] = e;
	}

        cout << "Enter value to be found" << endl;
	int val;
	cin >> val;

	auto low = lower_bound(a,a+N,val);
	if(low - a < 0){
		cout << "No";
	}else{
		cout << "Yes " << low-a << endl;
	}

	return 0;

}
