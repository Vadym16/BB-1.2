#include <iostream>

using namespace std;


int S(int a, int b) {
	return a * b;
};

double S(double a, double b) {
	return a * b;
};

int pererob(int binary);
void view(int* binaries, int count);

int main() {
	

	setlocale(LC_ALL, "ukr");
	cout << "\tЗавдання 1\n" << endl;
	char C;
	cout << "Виберіть дію завдання a чи b: "; cin >> C;
	cout << "Введіть числа які хочете премножити" << endl;
	if (C == 'a') {
		int x, y;
		cout << "Число x "; cin >> x;
		cout << "Число y "; cin >> y;
		cout << "Відповідь: " << S(x, y);
	}
	else if (C == 'b') {
		double x, y;
		cout << "Число x "; cin >> x;
		cout << "Число y "; cin >> y;
		cout << "Відповідь: " << S(x, y);
	}

	cout << "\n\n\tЗавдання 2\n" << endl;
	
	int binar[100];
	int size;
	cout << "Введіть кількість двійкових чисел: "; cin >> size;
	cout << "Введіть числа в двійковій системі: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> binar[i];
	}
	view(binar, size);
	
}


int pererob(int binary) {
	int Decit = 0;
	int base = 1; 

	while (binary > 0) {
		int last_s = binary % 10; 
		binary = binary / 10;         
		Decit += last_s * base;  
		base = base * 2;             
	}

	return Decit;
}

void view(int* binary, int size) {
	for (int i = 0; i < size; i++) {
		cout << "Бінарні: " << binary[i]<< " -> Десяткові: " << pererob(binary[i])<<endl;
	}
}