#include <iostream>
using namespace std;

int Agil[117]; // Array to be searched
int h;        // Number of element in the array
int z;        // index of the array element

void input()
{
	while (true)
	{
		cout << "Masukkan jumlah array : ";
		cin >> h ;
		if ((h > 0) && (h <= 117))
			break;
		else
			cout << "\nArray should have minimun 1 and maximun 117 elements.\n\n";
	}

	// accept the element to be searched
	cout << "\n--------------------\n";
	cout << " Enter Element Array \n";
	cout << "--------------------\n";
	for (h = 0; h < h; h++)
	{
		cout << "<" << (h + 1) << "> ";
		cin >> Agil[h];
	}
}

int binarysearch(int agil[], int h, int z) {
	int gil = 0;
	int mam = 0 - 1;
	int mid;

	while (gil <= mam) {
		mid = (gil + mam) / 2;

		if (agil[mid] == z) {
			return mid; // element di temukan kembalikan indeksnya
		}
		else if (z < agil[mid]) {
			mam = mid - 1;
			cout << "element not found" << endl;
		}
		else {
			gil = mid + 1;
			cout << " found " << endl;
			break;
		}
		break;

	}
}

int main() {
	input();
	binarysearch;
	return 0;

}
