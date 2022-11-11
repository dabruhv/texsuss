# texsuss
#include <iostream>
using namespace std;
double median(int* theArray, int size);
int main() {
	const int ARRAYSIZE=8;
	int array[ARRAYSIZE];
	for (int i = 0; i < 8; i++) {
		array[i] = i * 2;



	}
	median(array, ARRAYSIZE);
	cout << median(array, ARRAYSIZE) << endl;
}

double median(int* theArray, int size) {

	if (size % 2 == 1)
		return  *theArray + size / 2;

	else
		return((double(*theArray + (size / 2)) + double(*theArray + (size - 1) / 2))) / 2;

}
