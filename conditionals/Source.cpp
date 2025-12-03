#include <iostream>
#include <cstdlib> 
#include <windows.h>
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    // ЗАДАНИЕ 1
   
    {
       
        int n;
        
        while (true)
        {
            std::cout << "Задание 1\n";
            std::cout << "Введите шестизначное число: ";
            std::cin >> n;
            if (n < 100000 || n > 999999) {
                std::cout << "Ошибка: число не шестизначное.\n";
                Sleep(2000);
                system("cls");
                continue;
                
            }

            else
            {
                int d1 = n / 100000;
                int d2 = (n / 10000) % 10;
                int d3 = (n / 1000) % 10;
                int d4 = (n / 100) % 10;
                int d5 = (n / 10) % 10;
                int d6 = n % 10;

                if (d1 + d2 + d3 == d4 + d5 + d6)
                    std::cout << "Счастливое число\n";
                else
                    std::cout << "Обычное число\n";
            }
            break;
        }
        
        system("pause");
        system("cls");
    }

    
    // ЗАДАНИЕ 2
    
    {
       

        
        int n;
        while (true)
        {
            std::cout << "\nЗадание 2\n";
            std::cout << "Введите четырёхзначное число: ";           
            std::cin >> n;



            if (n < 1000 || n > 9999)
            {
                std::cout << "Ошибка: число не четырёхзначное.\n";
                Sleep(2000);
                system("cls");
                continue;
            }
            else 
            {
                int a = n / 1000;
                int b = (n / 100) % 10;
                int c = (n / 10) % 10;
                int d = n % 10;

                int result = b * 1000 + a * 100 + d * 10 + c;

                std::cout << "Результат перестановки: " << result << "\n";
            }
            break;
        }
        system("pause");
        system("cls");
    }

    
    // ЗАДАНИЕ 3
    
    {
        std::cout << "\nЗадание 3\n";
        std::cout << "Введите 7 целых чисел:\n";

        int x, maxVal;
        std::cin >> maxVal;

        for (int i = 1; i < 7; i++) 
        {
            std::cin >> x;
            if (x > maxVal)
                maxVal = x;
        }

        std::cout << "Максимальное число: " << maxVal << "\n";

        system("pause");
    }

    return 0;
}
