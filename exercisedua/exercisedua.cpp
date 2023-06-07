#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;
public:
	bidangDatar() { 
		x = 0;
	}
	virtual void input() = 0;
	virtual float Luas(int a) = 0; 
	virtual float Keliling(int a) = 0; 
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
};
class Lingkaran :public bidangDatar {
public:
	void input() {
		cout << "masukkan jejari lingkaran :";
		int r; 
		cin >> r;
		setX(r);
	}
	float Luas(int r) {
		return 3.14 * r * r;
	}
	float Keliling(int r) {
		return 2 * 3.14 * r;
	}
};

class Bujursangkar : public bidangDatar {
public:
	void input() {
		cout << "masukkan sisi Bujursangkar : ";
		int s;
		cin >> s;
		setX(s);
	}
	float Luas(int s) {
		return s * s;
	}
	float Keliling(int s) {
		return 4 * s;
	}
};

int main() {
	bidangDatar* bd;

	cout << "Lingkaran dibuat" << endl;
	bd = new Lingkaran();
	bd->input();
	int r = bd->getX();
	cout << "Luas Lingkaran = " << bd->Luas(r) << endl;
	cout << "Keliling Bujursangkar = " << bd->Keliling(r) << endl;

	cout << "\nBujursangjar = " << endl;
	bd = new Bujursangkar();
	bd->input();
	int s = bd->getX();
	cout << "Luas Bujursangkar = " << bd->Luas(s) << endl;
	cout << "Keliling Bujursangkar = " << bd->Keliling(s) << endl;

	delete bd;
	return 0;
}