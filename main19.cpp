#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main() {
	string binaryStr;
	cout << "Enter a binary number: ";
	cin >> binaryStr;

	unsigned long decimal = bitset<32>(binaryStr).to_ulong();
	
	cout << "Decimal: " << decimal << endl;
	cout << "Octal: " << oct << decimal << endl;
	cout << "Hexadecimal: " << hex << uppercase << decimal << endl;
	
return 0;	
	
}
