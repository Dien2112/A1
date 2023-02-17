#include <iostream>
#include <fstream>
using namespace std;
void Queen(int a[][20], int m, int n) {
	int dem = 0;
	for (int i = 0; i < m; i++) {
		int jMax = 0; bool ok = true;
		for (int j = 1; j < n; j++) if (a[i][j] > a[i][jMax]) jMax = j; 
		for (int j = 0; j < n; j++) if (j != jMax && a[i][j] == a[i][jMax]) ok = false;
		for (int k = 0; k < m; k++) if (a[k][jMax] > a[i][jMax]) ok = false;

		for (int k = 1; i+k<m && jMax+k<n; k++) if (a[i+k][jMax+k] >= a[i][jMax]) ok = false;
		for (int k = 1; i + k < m && jMax - k >=0; k++) if (a[i + k][jMax - k] >= a[i][jMax]) ok = false;
		for (int k = 1; i - k >=0 && jMax + k < n; k++) if (a[i - k][jMax + k] >= a[i][jMax]) ok = false;
		for (int k = 1; i - k >= 0 && jMax - k >= 0; k++) if (a[i - k][jMax - k] >= a[i][jMax]) ok = false;
		if (ok) {
			dem++; cout << i << " " << jMax << endl;
		}
	}
	cout << dem;
}
int main() {
	int a[3][20];
	fstream f; f.open("Text.txt", ios::in);
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) 
		f >> a[i][j];
	Queen(a, 3, 3);
	return 0;
}