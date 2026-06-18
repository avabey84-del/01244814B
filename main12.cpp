#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	if (n & 3 == 0 && n % 2 != 0)
	    cout << "True";
else
        cout << "False";
			
	return 0;
}
