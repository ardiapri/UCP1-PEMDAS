#include <iostream>
using namespace std;

 string Mahasiswa;
 string nilai;
    int  arr[20];
    int n;

	void input() {         //prosedur untuk input
		while (true) {
			cout << "masukan banyaknya elemen pada array : ";   //output ke layar
			cin >> n; //input dari pengguna
			if (n <= 20) //jika nilai kurang dari atau sama dengan 20
				break; //di tolak
			else {     //jika n lebih dari 20
				cout << "\narray dapat mempunyai maksimal 20 elemen.\n"; //di terima
			}
		}
		cout << endl;                          //output baris kosong
		cout << "===================" << endl; //output ke layar
		cout << "masukan elemen array" << endl;//output ke layar
		cout << "===================" << endl; //output ke layar

		for (int i = 0; i < n; i++) {
			cout << "data ke-" << (i + 1) << ": ";
			cin >> arr[i];
		}
	








	//1.string nama
	//  void input
	// int main
	//2.
	//3.struct mahasiswa
	//4.



    