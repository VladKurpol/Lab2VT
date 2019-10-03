// Lab.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <fstream>

int main()
{
	setlocale(LC_ALL, "Rus");
	std::cout << "Чтение файла..." << "\n";
	std::ifstream file; 
	file.open("input1.txt");
	std::ifstream file1;
	file1.open("input2.txt");
	
	int massive1[15];
	int massive2[15];

	for (size_t i = 0; i <= 15; i++)
	{
		file >> massive1[i];
		std::cout << massive1[i] << "\n";
	}
	
	std::cout << "===========================" << "\n";

	for (size_t i = 0; i <= 15; i++)
	{
		file1 >> massive2[i];
		std::cout << massive2[i] << "\n";
	}

	std::cout << "==========================" << "\n";

	if (massive1[0] == 1)
	{
		if (massive1[1] == 0)
		{
			massive1[1] = 1;
		}
		else if (massive1[1] == 1)
		{
			massive1[1] = 0;
		}
		
		if (massive1[2] == 0)
		{
			massive1[2] = 1;
		}
		else if (massive1[2] == 1)
		{
			massive1[2] = 0;
		}
		
		if (massive1[3] == 0)
		{
			massive1[3] = 1;
		}
		else if (massive1[3] == 1)
		{
			massive1[3] = 0;
		}
		
		if (massive1[4] == 0)
		{
			massive1[4] = 1;
		}
		else if (massive1[4] == 1)
		{
			massive1[4] = 0;
		}

		if (massive1[5] == 0)
		{
			massive1[5] = 1;
		}
		else if (massive1[5] == 1)
		{
			massive1[5] = 0;
		}

		if (massive1[6] == 0)
		{
			massive1[6] = 1;
		}
		else if (massive1[6] == 1)
		{
			massive1[6] = 0;
		}

		if (massive1[7] == 0)
		{
			massive1[7] = 1;
		}
		else if (massive1[7] == 1)
		{
			massive1[7] = 0;
		}

		if (massive1[8] == 0)
		{
			massive1[8] = 1;
		}
		else if (massive1[8] == 1)
		{
			massive1[8] = 0;
		}

		if (massive1[9] == 0)
		{
			massive1[9] = 1;
		}
		else if (massive1[9] == 1)
		{
			massive1[9] = 0;
		}

		if (massive1[10] == 0)
		{
			massive1[10] = 1;
		}
		else if (massive1[10] == 1)
		{
			massive1[10] = 0;
		}

		if (massive1[11] == 0)
		{
			massive1[11] = 1;
		}
		else if (massive1[11] == 1)
		{
			massive1[11] = 0;
		}

		if (massive1[12] == 0)
		{
			massive1[12] = 1;
		}
		else if (massive1[12] == 1)
		{
			massive1[12] = 0;
		}

		if (massive1[13] == 0)
		{
			massive1[13] = 1;
		}
		else if (massive1[13] == 1)
		{
			massive1[13] = 0;
		}

		if (massive1[14] == 0)
		{
			massive1[14] = 1;
		}
		else if (massive1[14] == 1)
		{
			massive1[14] = 0;
		}

		if (massive1[15] == 0)
		{
			massive1[0] = 1;
		}
		else if (massive1[15] == 1)
		{
			massive1[0] = 0;
		}
	}
	if (massive2[0] == 1)
	{
		if (massive2[1] == 0)
		{
			massive2[1] = 1;
		}
		else if (massive2[1] == 1)
		{
			massive2[1] = 0;
		}

		if (massive2[2] == 0)
		{
			massive2[2] = 1;
		}
		else if (massive2[2] == 1)
		{
			massive2[2] = 0;
		}

		if (massive2[3] == 0)
		{
			massive2[3] = 1;
		}
		else if (massive2[3] == 1)
		{
			massive2[3] = 0;
		}

		if (massive2[4] == 0)
		{
			massive2[4] = 1;
		}
		else if (massive2[4] == 1)
		{
			massive2[4] = 0;
		}

		if (massive2[5] == 0)
		{
			massive2[5] = 1;
		}
		else if (massive2[5] == 1)
		{
			massive2[5] = 0;
		}

		if (massive2[6] == 0)
		{
			massive2[6] = 1;
		}
		else if (massive2[6] == 1)
		{
			massive2[6] = 0;
		}

		if (massive2[7] == 0)
		{
			massive2[7] = 1;
		}
		else if (massive2[7] == 1)
		{
			massive2[7] = 0;
		}

		if (massive2[8] == 0)
		{
			massive2[8] = 1;
		}
		else if (massive2[8] == 1)
		{
			massive2[8] = 0;
		}

		if (massive2[9] == 0)
		{
			massive2[9] = 1;
		}
		else if (massive2[9] == 1)
		{
			massive2[9] = 0;
		}

		if (massive2[10] == 0)
		{
			massive2[10] = 1;
		}
		else if (massive2[10] == 1)
		{
			massive2[10] = 0;
		}

		if (massive2[11] == 0)
		{
			massive2[11] = 1;
		}
		else if (massive2[11] == 1)
		{
			massive2[11] = 0;
		}

		if (massive2[12] == 0)
		{
			massive2[12] = 1;
		}
		else if (massive2[12] == 1)
		{
			massive2[12] = 0;
		}

		if (massive2[13] == 0)
		{
			massive2[13] = 1;
		}
		else if (massive2[13] == 1)
		{
			massive2[13] = 0;
		}

		if (massive2[14] == 0)
		{
			massive2[14] = 1;
		}
		else if (massive2[14] == 1)
		{
			massive2[14] = 0;
		}

		if (massive2[15] == 0)
		{
			massive2[0] = 1;
		}
		else if (massive2[15] == 1)
		{
			massive2[0] = 0;
		}
	}

	std::cout << "Массив: ";

	for (size_t i = 0; i <= 15; i++)
	{
		std::cout << massive2[i];
	}

	std::cout << "\n" << "============================" << "\n";

	std::cout << "\n" << "Массив: ";

	for (size_t i = 0; i <= 15; i++)
	{
		std::cout << massive1[i];
	}

	std::cout << "\n" << "============================" << "\n";

	int massive3[15];
	for (size_t i = 0; i <= 15; i++)
	{
		massive3[i] = 0;
	}
	int pointer = 0;

	for (size_t i = 15; i != 0; i--)
	{
		if (massive1[i] == 0 && massive2[i] == 0)
		{
			massive3[i] = 0;
			if (pointer == 1)
			{
				massive3[i] = 1;
			}
			pointer = 0;
		}
		else if ((massive1[i] == 1 && massive2[i] == 0) || (massive1[i] == 0 && massive2[i] == 1))
		{
			massive3[i] = 1;
			if (pointer == 1)
			{
				massive3[i] = 0;
				pointer = 1;
				continue;
			}
			pointer = 0;
		}
		else if (massive1[i] == 1 && massive2[i] == 1)
		{
			massive3[i] = 0;
			if (pointer == 1)
			{
				massive3[i] = 1;
			}
			pointer = 1;
		}
	}
	if (pointer = 1)
	{
		massive3[0] = 1;
	}
	
	int massive4[15];
	
	int pointer1 = 0;
	
	if (massive3[0] == 1)
	{
		if (massive3[15] == 0)
		{
			massive4[15] = 1;
		}
		else if (massive3[15] == 1)
		{
			massive4[15] = 0;
			pointer1 = 1;
			for (size_t i = 14; i != 0; i--)
			{
				if (massive3[i] == 1)
				{
					if (pointer1 == 0)
					{
						massive4[i] = 1;
						pointer1 = 0;
					}
					if (pointer1 == 1)
					{

						massive4[i] = 0;
						pointer1 = 1;
					}
				}
				else if (massive3[i] == 0)
				{
					if (pointer1 == 0)
					{
						massive4[i] = 0;
						pointer1 = 0;
					}
					if (pointer1 == 1)
					{
						pointer1 = 0;
						massive4[i] = 1;
						
					}
				}
			}
		}
		massive4[0] = 1;
	}

	std::cout << "Массив финал: ";
	for (size_t i = 0; i <= 15; i++)
	{
		std::cout << massive4[i];
	}

	file.close();
	file1.close();

	

	return 0;
}

