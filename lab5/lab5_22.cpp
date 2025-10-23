#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	char letter;

	cout << "Введите одну из 6 букв ( P U R L M ):";
	cin >> letter;

	switch (letter) {
	case 'P':
		cout << "Portugal" << endl;
		break;
	case 'U':
		cout << "Ukraine" << endl;
		break;
	case 'R':
		cout << "Russia" << endl;
		break;
	case 'L':
		cout << "Latvia" << endl;
		break;
	case 'M':
		cout << "Montenegro" << endl;
		break;
	default:
		cout << "Ошибка!" << endl;
		break;
	}
	return 0;
}
