#define  _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <locale.h>

int task1(), task2(), task3();

int main()
{
	setlocale(LC_ALL, "RUS");
	int num;
	scanf("%d", &num);
	printf("%x", num);
	task1();

	return 0;
}

int task1()
{
	//Инициализация переменных
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;

	printf("%c %d %.2f %e\n", c, i, f, d);
	printf("Введите символ, целое число, число с плавающей запятой и число в экспонициальной записи ");
	//Ввод данных пользователем
	scanf("%c %d %f %le", &c, &i, &f, &d);
	//1a
	printf("Целая часть: %d. Дробная часть: %f.\n", (int)f, f - (int)f);
	//1б
	printf("Шестнадцатиричная запись: %x. Десятичная запись запись: %d\n", c, c);
	//1в
	printf("1/i = %f\n", 1.0 / i);

	return 0;
}

int task2()
{
	//Инициализация и объявление переменных
	int a = 11, b = 3;
	int x;
	float y;
	double z;

	//Присвоение переменным x, y и z выражения a/b
	x = a / b;
	y = a / b;
	z = a / b;
	//Вывод полученных x, y, z
	printf("x = %d, y = %f, z = %lf\n", x, y, z);
	//Вывод a/b типа float и double без x, y, z
	printf("float = %f, double = %lf\n", (float)a / b, (double)a / b);

	return 0;
}

int task3()
{
	//Объявление переменной
	int N;

	printf("Введите трёхзначное число число ");
	//Ввод числа пользовотелем
	scanf("%d", &N);
	//Вывод последней цифры, первой цифры, суммы цифр и записи числа наоборот
	printf("Последняя цифра %d, первая цифра %d, сумма цифр %d, запись числа наоборот %d%d%d", N % 10, N / 100, N % 10 + (N / 10) % 10 + N / 100, N % 10, N / 10 % 10, N / 100);

	return 0;
}
