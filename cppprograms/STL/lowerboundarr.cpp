#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int N;
	cin >> N;
	int a[N];
	for(int i=0;i<N;i++){
		int e;
		cin >> e;
		a[i] = e;
	}
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
