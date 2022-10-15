#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int solution(int number) {
	int sum = 0;
	while (number) {
		sum += number % 10;
		number /= 10;
	}
	return sum;
}

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string name, surname;
	int birth;
	cout << "Имя: ";
	cin >> name;
	cout << endl;
	cout << "Фамилия: ";
	cin >> surname;
	cout << endl;
	cout << "Год рождения: ";
	cin >> birth;
	string films[28] = { "Форсаж","Решение уйти","Олдбой","Терминатор","Нога","Семь","12 стульев","Шапито-Шоу","Джокер","Моана","Тачки","Трансформеры","На игле",
	"Французский вестник","Кавказская пленница","Матрица","Молчание","Молчание ягнят","Форд против Феррари","11 друзей Оушена","Даласский клуб покупателей","Казино",
	"Американский пирог","Побег из Шоушенка","Выживший","Властелин колец","Лицо со шрамом","Броненосец Потемкин" };
	string selebs[28] = { "Ариана Гранде","Леди Гага","Анджелина Джоли","Аня Тейлор Джой","Белла Хадид","Антонио Бандерас","Владимир Набоков","Габриэль Гарсиа Маркес",
		"Канье Уэст","Лионель Месси","Мануэль Нойер","Эрик Тен Хаг","Криштиану Роналду","Зинедин Зидан","Пол Маккартни","Уилл Смит","Ченинг Татум","Антон Долин",
		"Василий Уткин","Юрий Хованский","Билл Мюррей","Кира Муратова","Альберт Эйнштейн","Луи Фердинанд Селин","Федерико Феллини","Баз Лайтер","Артур Чапарян","Идрак Мирзализаде" };
	string songs[9] = { "King Crimson - \"Epitaph\"","Аквариум - \"25 к 10\"","The Strokes - \"Hard to explain\"","Bob Dylan - \"Hurricane\"","The Police - \"Roxanne\"",
	"Blondie - \"Atomic\"","Radiohead - \"Idioteque\"","The Cure - \"Lovesong\"","The Mamas And The Papas - \"California Dreamin'\"" };
	char litters[28] = { 'а','б','в','г','д','е','ж','з','и','к','л','м','н','о','п','р','с','т','у','ф','х','ц','ч','ш','щ','э','ю','я'};
	char n,s;
	n = tolower(name[0]);
	s = tolower(surname[0]);
	int f, v;
	for (int j = 0; j < 28; j++) {
		if (n == litters[j])
			f = j;
		if (s == litters[j])
			v = j;
	}
	int sas = solution(birth);
	int sol = solution(sas) - 1;
	cout << "Супер! Ваш фильм это " << films[f] << ", звезда " << selebs[v] << ". Музыкальная композиция для вас: " << songs[sol] << endl;
} 