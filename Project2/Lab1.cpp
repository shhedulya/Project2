#include "iostream";
#include "locale";

/* Задание 2 — программа(2 балла).Считать расстояние и время.Если время не равно нулю, вывести среднюю скорость; иначе вывести сообщение об ошибке.*/
int calculcateSpeed(int distance, int time) {
	int speed = distance / time;
	return speed;
}

int main() {

	setlocale(LC_ALL, "Rus");

	std::cout << "Задание 2" << "\n";

	int time;

	std::cout << "Введите время" << "\n";
	std::cin >> time;

	if (time >= 0) {
		int distance;

		std::cout << "Введите расстояние" << "\n";
		std::cin >> distance;

		int speed = calculcateSpeed(distance, time);
		std::cout << "Скорость: " << speed << "\n";
	}
	else {
		std::cout << "Введите корректное время" << "\n";
	}
	
	std::cout << "Задание 3" << "\n";

	/* Задание 3 — программа повышенного уровня(4 балла).Считать planned как unsigned int и completed как int.
	Безопасно получить signed - разность через static_cast<int>(planned) - completed и вывести :
	сколько осталось или насколько план перевыполнен. */
	unsigned int planned;

	std::cout << "Введите запланированное кол-во" << "\n";
	std::cin >> planned;

	if (static_cast<int>(planned) < 0) {
		std::cout << "Введено некорректное значение" << "\n";
		return 1;
	}

	int completed;

	std::cout << "Введите выполненное кол-во" << "\n";
	std::cin >> completed;

	int result = static_cast<int>(planned) - completed;

	if (result == 0) {
		std::cout << "План выполнен" << "\n";
	}
	else if (result > 0) {
		std::cout << "План не выполнен, осталось: " << result * -1 << "\n";
	}
	else {
		std::cout << "План перевыполнен" << result * -1 << "\n";
	}

	return 0;
}