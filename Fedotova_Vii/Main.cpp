#include <iostream>
#include <windows.h>
#include <cmath>

const int size = 64;
std::string Products[size]{};
int Products_count[size]{};
int Products_Price[size]{};

int Pokypka(std::string product, int count, int price) {
	if (count <= 64)
	{
		if (count != 0)
		{
			for (size_t i = 0; i < size; i++)
			{
				Products[i] = product;
				Products_count[i] = count;
				Products_Price[i] = price * count;
				std::cout << Products_count[i] << " " << Products[i] << " за " << Products_Price[i] << "\n";
				return 0;
			}
		}
		else {
			return 0;
		}

	}
	else
	{
		std::cout << "корзина переполнена!\n";
		return 0;
	}
}

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	const int size1 = 4;
	const int size2 = 3;
	const int size3 = 2;
	const int size4 = 1;
	std::string fruit[size1]{ "Яблочный", "Апельсиновый", "Абрикосовый", "Грушевый" };
	int fruit_price[size1]{ 80, 90, 90, 85};
	std::string vegetable[size2]{ "Томатный", "Луковый", "Огуречный" };
	int vegetable_price[size2]{ 95, 110, 110 };
	std::string tea[size3]{ "Чесночный", "Петрушевый" };
	int tea_price[size3]{ 130, 130 };
	std::string nastoyki[size4]{ "Боярышник" };
	int nastoyki_price[size4]{ 1000 };

	int countProducts, choseKategory, choseVkysFruit, count;

	while (true)
	{
		system("cls");
		std::cout << " ________________________________________________ \n";
		std::cout << "|\t\t\t\t\t\t |\n";
		std::cout << " \t << Магазин Соки Вихтории >> \t\t \n";
		std::cout << "|________________________________________________| \n\n";

		std::cout << "Наш Ассортимент: \n";
		std::cout << "1) Фруктовые соки (Яблочный, Апельсиновый, Абрикосовый, Грушевый)\n";
		std::cout << "2) Овощные соки ( Томатный, Луковый, Огуречный)\n";
		std::cout << "3) Чаи (Чесночный, Петрушевый)\n";
		std::cout << "4) Настоечки (Боярышник)\n";

		std::cout << "Выберите категорию из представленных: ";
		std::cin >> choseKategory;
		if (choseKategory != 1 && choseKategory != 2 && choseKategory != 3 && choseKategory != 4)
		{
			std::cout << "\n Некорректный ввод \n";
			Sleep(800);
		}
		else if (choseKategory == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "Выбрана категория 1) Фруктовые соки \n";
				std::cout << "Вкусы и цены фруктовых соков: \n";
				for (size_t i = 1; i <= size1; i++)
				{
					std::cout << i << " - " << fruit[i - 1] << " за " << fruit_price[i-1] << "\n";
				}
				std::cout << "Для выхода в главное меню введите 0 \n";
				std::cout << "Выберите вкус из представленных: ";
				std::cin >> choseVkysFruit;
				if (choseVkysFruit != 0 && choseVkysFruit != 1 && choseVkysFruit != 2 && choseVkysFruit != 3 && choseVkysFruit != 4)
				{
					std::cout << "\n Некорректный ввод \n";
					Sleep(800);
				}
				if (choseVkysFruit == 0)
				{
					break;
				}
				else if (choseVkysFruit == 1)
				{
					std::cout << "Ваш выбор: " << fruit[0] << "\n";
					std::cout << "Введите кол-во банок сока для покупки: ";
					std::cin >> count;
					Pokypka(fruit[0], count, fruit_price[0]);
					std::cout << "Сок добавлен в корзину! \n";
					Sleep(800);
				}
				else if (choseVkysFruit == 2)
				{
					std::cout << "Ваш выбор: " << fruit[1] << "\n";
					std::cout << "Введите кол-во банок сока для покупки: ";
					std::cin >> count;
					Pokypka(fruit[1], count, fruit_price[1]);
					std::cout << "Сок добавлен в корзину! \n";
					Sleep(800);
				}
				else if (choseVkysFruit == 3)
				{
					std::cout << "Ваш выбор: " << fruit[2] << "\n";
					std::cout << "Введите кол-во банок сока для покупки: ";
					std::cin >> count;
					Pokypka(fruit[2], count, fruit_price[2]);
					std::cout << "Сок добавлен в корзину! \n";
					Sleep(800);
				}
				else if (choseVkysFruit == 4)
				{
					std::cout << "Ваш выбор: " << fruit[3] << "\n";
					std::cout << "Введите кол-во банок сока для покупки: ";
					std::cin >> count;
					Pokypka(fruit[3], count, fruit_price[3]);
					std::cout << "Сок добавлен в корзину! \n";
					Sleep(800);
				}

			}
		}
		else if (choseKategory == 2)
		{
			while (true)
			{
				system("cls");
				std::cout << "Выбрана категория 2) Овощные соки \n";
				std::cout << "Вкусы и цены овощных соков: \n";
				for (size_t i = 1; i <= size2; i++)
				{
					std::cout << i << " - " << vegetable[i - 1] << " за " << vegetable_price[i - 1] << "\n";
				}
				std::cout << "Для выхода в главное меню введите 0 \n";
				std::cout << "Выберите вкус из представленных: ";
				std::cin >> choseVkysFruit;
				if (choseVkysFruit != 0 && choseVkysFruit != 1 && choseVkysFruit != 2 && choseVkysFruit != 3 )
				{
					std::cout << "\n Некорректный ввод \n";
					Sleep(800);
				}
				if (choseVkysFruit == 0)
				{
					break;
				}
				else if (choseVkysFruit == 1)
				{
					std::cout << "Ваш выбор: " << vegetable[0] << "\n";
					std::cout << "Введите кол-во банок сока для покупки: ";
					std::cin >> count;
					Pokypka(vegetable[0], count, vegetable_price[0]);
					std::cout << "Сок добавлен в корзину! \n";
					Sleep(800);
				}
				else if (choseVkysFruit == 2)
				{
					std::cout << "Ваш выбор: " << vegetable[1] << "\n";
					std::cout << "Введите кол-во банок сока для покупки: ";
					std::cin >> count;
					Pokypka(vegetable[1], count, vegetable_price[1]);
					std::cout << "Сок добавлен в корзину! \n";
					Sleep(800);
				}
				else if (choseVkysFruit == 3)
				{
					std::cout << "Ваш выбор: " << vegetable[2] << "\n";
					std::cout << "Введите кол-во банок сока для покупки: ";
					std::cin >> count;
					Pokypka(vegetable[2], count, vegetable_price[2]);
					std::cout << "Сок добавлен в корзину! \n";
					Sleep(800);
				}

			}
		}
		else if (choseKategory == 3)
		{
			while (true)
			{
				system("cls");
				std::cout << "Выбрана категория 3) Чаи \n";
				std::cout << "Вкусы и цены чая: \n";
				for (size_t i = 1; i <= size3; i++)
				{
					std::cout << i << " - " << tea[i - 1] << " за " << tea_price[i - 1] << "\n";
				}
				std::cout << "Для выхода в главное меню введите 0 \n";
				std::cout << "Выберите вкус из представленных: ";
				std::cin >> choseVkysFruit;
				if (choseVkysFruit != 0 && choseVkysFruit != 1 && choseVkysFruit != 2 && choseVkysFruit != 3)
				{
					std::cout << "\n Некорректный ввод \n";
					Sleep(800);
				}
				if (choseVkysFruit == 0)
				{
					break;
				}
				else if (choseVkysFruit == 1)
				{
					std::cout << "Ваш выбор: " << tea[0] << "\n";
					std::cout << "Введите кол-во банок для покупки: ";
					std::cin >> count;
					Pokypka(tea[0], count, tea_price[0]);
					std::cout << "Чай добавлен в корзину! \n";
					Sleep(800);
				}
				else if (choseVkysFruit == 2)
				{
					std::cout << "Ваш выбор: " << tea[1] << "\n";
					std::cout << "Введите кол-во банок чая для покупки: ";
					std::cin >> count;
					Pokypka(tea[1], count, tea_price[1]);
					std::cout << "Чай добавлен в корзину! \n";
					Sleep(800);
				}

			}
		}
		else if (choseKategory == 4)
		{
			while (true)
			{
				system("cls");
				std::cout << "Выбрана категория 4) Настоечки \n";
				std::cout << "Вкусы и цены настоечек: \n";
				for (size_t i = 1; i <= size4; i++)
				{
					std::cout << i << " - " << nastoyki[i - 1] << " за " << nastoyki_price[i - 1] << "\n";
				}
				std::cout << "Для выхода в главное меню введите 0 \n";
				std::cout << "Выберите вкус из представленных: ";
				std::cin >> choseVkysFruit;
				if (choseVkysFruit != 0 && choseVkysFruit != 1 && choseVkysFruit != 2 && choseVkysFruit != 3)
				{
					std::cout << "\n Некорректный ввод \n";
					Sleep(800);
				}
				if (choseVkysFruit == 0)
				{
					break;
				}
				else if (choseVkysFruit == 1)
				{
					std::cout << "Ваш выбор: " << nastoyki[0] << "\n";
					std::cout << "Введите кол-во банок настойки для покупки: ";
					std::cin >> count;
					Pokypka(nastoyki[0], count, nastoyki_price[0]);
					std::cout << "Настоечка добавлена в корзину! \n";
					Sleep(800);
				}

			}
		}
	}

	return 0;
}






