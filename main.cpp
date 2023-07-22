

#include <iostream>
#include <vector>
#include <fstream>
#include <Windows.h>
#include <time.h>
#include <string>
#include <conio.h>

using namespace std;

void one() {
	cout <<
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		" $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n"
		" $                          $\n";
}
void two() {
	cout << "                   \n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		" $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n"
		" $                          $\n";
}
void three() {
	cout << "        $$$$$$$$$$$$$$$\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		" $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n"
		" $                          $\n";
}
void four() {
	cout << "        $$$$$$$$$$$$$$$\n"
		"        |              $\n"
		"        |              $\n"
		"        |              $\n"
		"        |              $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		" $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n"
		" $                          $\n";
}
void five() {
	cout << "        $$$$$$$$$$$$$$$\n"
		"        |              $\n"
		"        |              $\n"
		"        |              $\n"
		"        |              $\n"
		"        O              $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		" $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n"
		" $                          $\n";
}
void six() {
	cout << "        $$$$$$$$$$$$$$$\n"
		"        |              $\n"
		"        |              $\n"
		"        |              $\n"
		"        |              $\n"
		"        O              $\n"
		"      /                $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		" $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n"
		" $                          $\n";
}
void seven() {
	cout <<
		"        $$$$$$$$$$$$$$$\n"
		"        |              $\n"
		"        |              $\n"
		"        |              $\n"
		"        |              $\n"
		"        O              $\n"
		"      /   \\           $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		" $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n"
		" $                          $\n";
}
void eight() {
	cout << "        $$$$$$$$$$$$$$$\n"
		"        |              $\n"
		"        |              $\n"
		"        |              $\n"
		"        |              $\n"
		"        O              $\n"
		"      / | \\           $\n"
		"        |              $\n"
		"                       $\n"
		"                       $\n"
		"                       $\n"
		" $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n"
		" $                          $\n";
}
void nine() {
	cout << "        $$$$$$$$$$$$$$$\n"
		"        |              $\n"
		"        |              $\n"
		"        |              $\n"
		"        |              $\n"
		"        O              $\n"
		"      / | \\           $\n"
		"        |              $\n"
		"       /               $\n"
		"                       $\n"
		"                       $\n"
		" $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n"
		" $                          $\n";
}
void ten() {
	cout << "        $$$$$$$$$$$$$$$\n"
		"        |              $\n"
		"        |              $\n"
		"        |              $\n"
		"        |              $\n"
		"        O              $\n"
		"      / | \\           $\n"
		"        |              $\n"
		"       / \\            $\n"
		"                       $\n"
		"                       $\n"
		" $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n"
		" $                          $\n";
}

void draw(int mistakes) {
	switch (mistakes) {
	case 1:
		one();
		break;
	case 2:
		two();
		break;
	case 3:
		three();
		break;
	case 4:
		four();
		break;
	case 5:
		five();
		break;
	case 6:
		six();
		break;
	case 7:
		seven();
		break;
	case 8:
		eight();
		break;
	case 9:
		nine();
		break;
	case 10:
		ten();
		break;
	}
}
void SetTemaName(int tema, string& name) {
	switch (tema)
	{
	case 1:
		name = "Еда";
		break;
	case 2:
		name = "Язык Программирования";
		break;
	case 3:
		name = "Марка машины";
		break;
	}
}

vector<string> SetArray(int tema, vector<string> food, vector<string> prog, vector<string> car) {
	if (tema == 1) {
		return food;
	}
	else if (tema == 2) {
		return prog;
	}
	else if (tema == 3) {
		return car;
	}
}

void SetWord(string& word, vector<string> array) {
	int ra = 0 + rand() % array.size();
	for (int i = 0; i < array.size(); i++) {
		if (i == ra) {
			word = array[i];
			return;
		}
	}
}
void print_word(string word, bool* gueesed) {

	cout << "\t\t\t\t\t";
	for (int i = 0; i < word.size(); i++) {
		if (gueesed[i] == false) {
			cout << "-- ";
		}
		else
			cout << word[i] << " ";
	}
	cout << "\n";
}
bool symvol_input(bool*& guessed, string word) {
	wchar_t ch = _getwch();
	bool found = false;
	for (int i = 0; i < word.size(); i++) {
		if (word[i] == ch) {
			guessed[i] = true;
			found = true;
		}
	}
	return found;
}
void save_data(int wins, int defeat) {
	ofstream file;
	
	file.open("data.txt");

	file << wins << " " << defeat;

	file.close();
}
void load_data(int& wins, int& defeat) {
	ifstream file;

	file.open("data.txt");
	
	file >> wins >> defeat;

	file.close();
}



int main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	vector<string> words_food = { "Ris", "Burger", "Soup" };
	vector<string> words_programming = { "C++", "C#", "Java" };
	vector<string> words_car = { "Lada", "Kamaz", "Toyota" };

	int tema = 1 + rand() % 3;
	string tema_name = "";
	
	vector<string> array = SetArray(tema, words_food, words_programming, words_car);

	SetTemaName(tema, tema_name);

	string word = "";
	
	
	SetWord(word, array);

	int letters_amount = word.size();
	
	bool* guessed = new bool[letters_amount];

	for (int i = 0; i < letters_amount; i++) {
		guessed[i] = false;
	}
	
	int guess_num = 0;
	bool the_end = false;

	

	int wins = 0;
	int defeat = 0;

	load_data(wins, defeat);

	while (true) {
		system("cls");
		cout << "\n\n\t\t\t\t\tВыйграшей:" << wins;
		cout << "\n\n\t\t\t\t\tПройграшей:" << defeat;
		cout << "\n\n\n";
		cout << "\n\n\t\t\t\t\tТема:\n";
		cout << "\n\t\t\t\t\t" << tema_name;
		cout << endl << endl << endl;
		draw(guess_num);
		if (guess_num == 10) {
			print_word(word, guessed);
			cout << "\n\t\t\t\t\tВЫ ПРОИГРАЛИ!!!";
			defeat += 1;
			save_data(wins, defeat);
			break;
		}
		else {
			the_end = true;
			for (int i = 0; i < letters_amount; i++) {
				if (guessed[i] == false) {
					the_end = false;
				}
			}
			if (the_end == true) {
				print_word(word, guessed);
				cout << "\n\t\t\t\t\tВЫ ВЫЙГРАЛИ!!!";
				wins += 1;
				save_data(wins, defeat);
				break;
			}
		}

		print_word(word, guessed);
		if (symvol_input(guessed, word) != true) {
			guess_num += 1;
		}

	}
	delete[] guessed;
	cout << endl;
	system("pause");

}
