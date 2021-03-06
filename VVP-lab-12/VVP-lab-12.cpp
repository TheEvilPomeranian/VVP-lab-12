#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Задача 1. \nДан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). \nВывести дату в виде текста (например, «пятое января»)." << endl;
	int n, m;
	cout << "Введите день: "; cin >> n;
	cout << "Введите месяц: "; cin >> m;
	if (n >= 1 && n <= 31 && m >= 1 && m <= 12) {
			switch (n) {
			case 1: cout << "первое ";
				break;
			case 2: cout << "второе ";
				break;
			case 3: cout << "третье ";
				break;
			case 4:	cout << "четвертое ";
				break;
			case 5:	cout << "пятое ";
				break;
			case 6:	cout << "шестое ";
				break;
			case 7:	cout << "седьмое ";
				break;
			case 8:	cout << "восьмое ";
				break;
			case 9:	cout << "девятое ";
				break;
			case 10: cout << "десятое ";
				break;
			case 11: cout << "одиннадцатое ";
				break;
			case 12: cout << "двенадцатое ";
				break;
			case 13: cout << "тринадцатое ";
				break;
			case 14: cout << "четырнадцатое ";
				break;
			case 15: cout << "пятнадцатое ";
				break;
			case 16: cout << "шеснадцатое ";
				break;
			case 17: cout << "семнадцатое ";
				break;
			case 18: cout << "восемнадцатое ";
				break;
			case 19: cout << "девятнадцатое ";
				break;
			case 20: cout << "двадцатое ";
				break;
			case 21: cout << "двадцать первое ";
				break;
			case 22: cout << "двадцать второе ";
				break;
			case 23: cout << "двадцать третье ";
				break;
			case 24: cout << "двадцать четвертое ";
				break;
			case 25: cout << "двадцать пятое ";
				break;
			case 26: cout << "двадцать шестое ";
				break;
			case 27: cout << "двадцать седьмое ";
				break;
			case 28: cout << "двадцать восьмое ";
				break;
			case 29: cout << "двадцать девятое ";
				break;
			case 30:
				if (m == 2) {
					cout << "В данном месяце нет 30-ого числа.";
				}
				else {
					cout << "тридцатое ";
				}
				break;
			case 31:
				if (m == 2 or m == 4 or m == 6 or m == 9 or m == 11) {
					cout << "В данном месяце нет 31-ого числа." << endl;
				}
				else {
					cout << "тридцать первое ";
				}
				break;
			}
			switch (m) {
			case 1: cout << "января"<< endl;
				break;
			case 2:
				if (n == 29) {
					cout << "февраля (в высокосный год)" << endl;
				}
				else if (n <= 28){
					cout << "февраля" << endl;
				}
				else {
					cout << "";
				}
				break;
			case 3: cout << "марта"<< endl;
				break;
			case 4:
				if (n == 31) {
					cout << "";
				}
				else {
					cout << "апреля"<< endl;
				}
				break;
			case 5: cout << "мая"<<endl;
				break;
			case 6:
				if (n == 31) {
					cout << "";
				}
				else {
					cout << "июня"<< endl;
				}
				break;
			case 7: cout << "июля"<<endl;
				break;
			case 8: cout << "августа" << endl;
				break;
			case 9:
				if (n == 31) {
					cout << "";
				}
				else {
					cout << "сентября" << endl;
				}
				break;
			case 10: cout << "октября" << endl;
				break;
			case 11:
				if (n == 31) {
					cout << "";
				}
				else {
					cout << "ноября" << endl;
				}
				break;
			case 12: cout << "декабря" << endl;
				break;
			}
	}
	else {
	cout << "Введены неверные значения." << endl;
	}

	cout << "\nЗадача 2. \nРобот может перемещаться в четырех направлениях (<N> — север, <W> — запад, <N> — юг, <E> — восток) \nи принимать три цифровые команды: 0 — продолжать движение, 1 — поворот налево, -1 — поворот направо. \nДан символ C — исходное направление робота и целое число N — посланная ему команда. \nВывести направление робота после выполнения полученной команды." << endl;
	int nn;
	char nap;
	cout << "Введите исходное направление робота (<N> — север, <W> — запад, <N> — юг, <E> — восток): "; cin >> nap;
	cout << "Введите условное обозначение команды для робота (0 — продолжать движение, 1 — поворот налево, -1 — поворот направо): "; cin >> nn;
	switch (nap) {
	case 'N':
		switch (nn) {
		case -1: nap = 'W';
			break;
		case 0: nap = 'N';
			break;
		case 1:	nap = 'E';
			break;
		}
		break;
	case 'E':
		switch (nn) {
		case -1: nap = 'N';
			break;
		case 0: nap = 'E';
			break;
		case 1:	nap = 'S';
			break;
		}
		break;
	case 'S':
		switch (nn) {
		case -1: nap = 'E';
			break;
		case 0:	nap = 'S';
			break;
		case 1:	nap = 'W';
			break;
		}
		break;
	case 'W':
		switch (nn) {
		case -1: nap = 'S';
			break;
		case 0: nap = 'W';
			break;
		case 1:	nap = 'N';
			break;
			}
		break;
	}
	cout << "Новое направление: " << nap << endl;
	
	cout << "\nЗадача 3. \nДано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме. \nВывести строку-описание указанного количества заданий, обеспечив правильное согласование числа со словами \n«учебное задание», например: 18 — «восемнадцать учебных заданий»." << endl;
	int z;
	cout << "Введите число: "; cin >> z;
	if (z >= 10 && z <= 40) {
		switch (z) {
		case 10: cout << "десять ";
			break;
		case 11: cout << "одиннадцать ";
			break;
		case 12: cout << "двенадцать ";
			break;
		case 13: cout << "тринадцать ";
			break;
		case 14: cout << "четырнадцать ";
			break;
		case 15: cout << "пятнадцать ";
			break;
		case 16: cout << "шеснадцать ";
			break;
		case 17: cout << "семнадцать ";
			break;
		case 18: cout << "восемнадцать ";
			break;
		case 19: cout << "девятнадцать ";
			break;
		case 20: cout << "двадцать ";
			break;
		case 21: cout << "двадцать одно ";
			break;
		case 22: cout << "двадцать два ";
			break;
		case 23: cout << "двадцатть три ";
			break;
		case 24: cout << "двадцать четыре ";
			break;
		case 25: cout << "двадцать пять ";
			break;
		case 26: cout << "двадцать шесть ";
			break;
		case 27: cout << "двадцать семь ";
			break;
		case 28: cout << "двадцать восемь ";
			break;
		case 29: cout << "двадцать девять ";
			break;
		case 30: cout << "тридцать ";
			break;
		case 31: cout << "тридцать одно ";
			break;
		case 32: cout << "тридцать два ";
			break;
		case 33: cout << "тридцать три ";
			break;
		case 34: cout << "тридцать четыре ";
			break;
		case 35: cout << "тридцать пять ";
			break;
		case 36: cout << "тридцать шесть ";
			break;
		case 37: cout << "тридцать семь ";
			break;
		case 38: cout << "тридцать восемь ";
			break;
		case 39: cout << "тридцать девять ";
			break;
		case 40: cout << "сорок ";
			break;
		}
		if ((z >= 22 && z <= 24) or (z >= 32 && z <= 34)) {
			cout << "учебных задания" << endl;
		}
		else if (z == 21 or z == 31) {
			cout << "учебное задание" << endl;
		}
		else {
			cout << "учебных заданий" << endl;
		}
	}
	else {
		cout << "Введеное число не входит в диапазон 10-40." << endl;
	}
	
	cout << "\nЗадача 4. \nДано целое число в диапазоне 100–999. \nВывести строку-описание данного числа, например: 256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать». " << endl;
	int a;
	cout << "Введите число: "; cin >> a;
	if (a >= 100 && a <= 999) {
		switch (a / 100) {
		case 1: cout << "сто ";
			break;
		case 2: cout << "двести ";
			break;
		case 3: cout << "триста ";
			break;
		case 4: cout << "четыреста ";
			break;
		case 5: cout << "пятьсот ";
			break;
		case 6: cout << "шестьсот ";
			break;
		case 7: cout << "семьсот ";
			break;
		case 8: cout << "восемьсот ";
			break;
		case 9: cout << "девятьсот ";
			break;
		}
		if (a % 100 >= 10 && a % 100 <= 19) {
			switch (a % 100) {
			case 10: cout << "десять " << endl;
				break;
			case 11: cout << "одиннадцать " << endl;
				break;
			case 12: cout << "двенадцать " << endl;
				break;
			case 13: cout << "тринадцать " << endl;
				break;
			case 14: cout << "четырнадцать " << endl;
				break;
			case 15: cout << "пятнадцать " << endl;
				break;
			case 16: cout << "шеснадцать " << endl;
				break;
			case 17: cout << "семнадцать " << endl;
				break;
			case 18: cout << "восемнадцать " << endl;
				break;
			case 19: cout << "девятнадцать " << endl;
				break;
			}
		}
		else {
			switch ((a % 100) / 10) {
			case 0: cout << "";
				break;
			case 2: cout << "двадцать ";
				break;
			case 3: cout << "тридцать ";
				break;
			case 4: cout << "сорок ";
				break;
			case 5: cout << "пятьдесят ";
				break;
			case 6: cout << "шестьдесят ";
				break;
			case 7: cout << "семьдесят ";
				break;
			case 8: cout << "восемьдесят ";
				break;
			case 9: cout << "девяносто ";
				break;
			}
			switch (a % 10) {
			case 0: cout << "" << endl;
				break;
			case 1: cout << "один" << endl;
				break;
			case 2: cout << "две" << endl;
				break;
			case 3: cout << "три" << endl;
				break;
			case 4: cout << "четыре" << endl;
				break;
			case 5: cout << "пять" << endl;
				break;
			case 6: cout << "шесть" << endl;
				break;
			case 7: cout << "семь" << endl;
				break;
			case 8: cout << "восемь" << endl;
				break;
			case 9: cout << "девять" << endl;
				break;
			}
		}
	}
	else {
		cout << "Введеное число не входит в диапазон 100-999 " << endl;
	}
	
	cout << "\nЗадача 5. \nВ восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, \nобозначаемых названиями цвета: зеленый, красный, желтый, белый и черный. \nВ каждом подцикле годы носят названия животных: крысы, коровы, тигра, зайца, \nдракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи. \nПо номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы»." << endl;
	int i;
	int post = 1984;
	cout << "Введите год: "; cin >> i;
	cout << i << " - год ";
	i = (i - post + 1 ) % 60;
	if (i >= 1 && i <= 12) {
		switch (i) {
		case 1: cout << "зеленой крысы" << endl;
			break;
		case 2: cout << "зеленой коровы" << endl;
			break;
		case 3: cout << "зеленого тигра" << endl;
			break;
		case 4: cout << "зеленого зайца" << endl;
			break;
		case 5: cout << "зеленого дракона" << endl;
			break;
		case 6: cout << "зеленой змеи" << endl;
			break;
		case 7: cout << "зеленой лошади" << endl;
			break;
		case 8: cout << "зеленой овцы" << endl;
			break;
		case 9: cout << "зеленой обезьяны" << endl;
			break;
		case 10: cout << "зеленой курицы" << endl;
			break;
		case 11: cout << "зеленой собаки" << endl;
			break;
		case 12: cout << "зеленой свиньи" << endl;
			break;
		}
	}
	else if (i >= 13 && i <= 24) {
		i = i - 12;
		switch (i) {
		case 1: cout << "красной крысы" << endl;
			break;
		case 2: cout << "красной коровы" << endl;
			break;
		case 3: cout << "красного тигра" << endl;
			break;
		case 4: cout << "красного зайца" << endl;
			break;
		case 5: cout << "красного дракона" << endl;
			break;
		case 6: cout << "красной змеи" << endl;
			break;
		case 7: cout << "красной лошади" << endl;
			break;
		case 8: cout << "красной овцы" << endl;
			break;
		case 9: cout << "красной обезьяны" << endl;
			break;
		case 10: cout << "красной курицы" << endl;
			break;
		case 11: cout << "красной собаки" << endl;
			break;
		case 12: cout << "красной свиньи" << endl;
			break;
		}
	}
	else if (i >= 25 && i <= 36) {
		i = i - 12 * 2;
		switch (i) {
		case 1: cout << "желтой крысы" << endl;
			break;
		case 2: cout << "желтой коровы" << endl;
			break;
		case 3: cout << "желтого тигра" << endl;
			break;
		case 4: cout << "желтого зайца" << endl;
			break;
		case 5: cout << "желтого дракона" << endl;
			break;
		case 6: cout << "желтой змеи" << endl;
			break;
		case 7: cout << "желтой лошади" << endl;
			break;
		case 8: cout << "желтой овцы" << endl;
			break;
		case 9: cout << "желтой обезьяны" << endl;
			break;
		case 10: cout << "желтой курицы" << endl;
			break;
		case 11: cout << "желтой собаки" << endl;
			break;
		case 12: cout << "желтой свиньи" << endl;
			break;
		}
	}
	else if (i >= 37 && i <= 48) {
		i = i - 12 * 3;
		switch (i) {
		case 1: cout << "белой крысы" << endl;
			break;
		case 2: cout << "белой коровы" << endl;
			break;
		case 3: cout << "белого тигра" << endl;
			break;
		case 4: cout << "белого зайца" << endl;
			break;
		case 5: cout << "белого дракона" << endl;
			break;
		case 6: cout << "белой змеи" << endl;
			break;
		case 7: cout << "белой лошади" << endl;
			break;
		case 8: cout << "белой овцы" << endl;
			break;
		case 9: cout << "белой обезьяны" << endl;
			break;
		case 10: cout << "белой курицы" << endl;
			break;
		case 11: cout << "белой собаки" << endl;
			break;
		case 12: cout << "белой свиньи" << endl;
			break;
		}
	}
	else if (i >= 49 && i <= 59) {
		i = i - 12 * 4;
		switch (i) {
		case 1: cout << "черной крысы" << endl;
			break;
		case 2: cout << "черной коровы" << endl;
			break;
		case 3: cout << "черного тигра" << endl;
			break;
		case 4: cout << "черного зайца" << endl;
			break;
		case 5: cout << "черного дракона" << endl;
			break;
		case 6: cout << "черной змеи" << endl;
			break;
		case 7: cout << "черной лошади" << endl;
			break;
		case 8: cout << "черной овцы" << endl;
			break;
		case 9: cout << "черной обезьяны" << endl;
			break;
		case 10: cout << "черной курицы" << endl;
			break;
		case 11: cout << "черной собаки" << endl;
			break;
		}
	}
	else {
		cout << "черной свиньи" << endl ;
	}
}
