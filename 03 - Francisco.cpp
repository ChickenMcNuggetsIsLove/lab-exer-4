#include <iostream>
using namespace std;
int main(){
	int number [] = {1, 2, 3, 4, 5};
	int* pointer = number;
	
	for (int counter = 0; counter < 5; counter++){
	cout << *pointer << endl;
	pointer++;
}
	system("PAUSE");
}
