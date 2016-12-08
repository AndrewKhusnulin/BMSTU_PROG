#include <iostream>
using namespace std;
int sum(int a, int b) 
{
	return a + b;
}
int sub(int a, int b) 
{
	return a - b;
}
int multiply(int a, int b) 
{
		return a*b;	
}
int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "rus");
	int a, b;
	if (argc < 3)
	{
		printf_s("Ошибка, параметров в командной строке не хватает для задания исходных данных.\n");
		system("pause");
		return 1;
	}
	if (!sscanf_s(argv[1], "%d", &a))

	{
		cout << "Ошибка, неверный формат первого входного параметра.\n" << endl;
		system("pause");
		return 1;
	}
	if (!sscanf_s(argv[2], "%d", &b))
	{
		cout << "Ошибка, неверный формат второго входного параметра.\n" << endl;
		system("pause");
		return 1;
	}
	cout << "Сумма: " << sum(a, b) << endl;
	cout << "Разность :" << sub(a, b) << endl;
	cout << "Произведение :" << multiply(a, b) << endl;
	system("pause");
	return 0;
}
