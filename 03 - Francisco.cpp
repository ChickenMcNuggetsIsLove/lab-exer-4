#include <iostream>
using namespace std;
int main(){
	int number [5];
	int* pointer = number;
	for (int counter = 0; counter < 5; counter++){
	cout << "Value: ";
	cin >> number[counter];
	
}
    for (int ctr = 0; ctr < 5; ctr++){
    cout << *pointer << endl;
    pointer++;
	}
	system("PAUSE");
}
