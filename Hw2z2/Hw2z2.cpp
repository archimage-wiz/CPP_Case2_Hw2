#include <iostream>
#include <string>

struct PersonAccount {
    std::string name;
    int account_number;
    double balance;
};

void changeBalance(PersonAccount &p_obj, double new_ballance){
    p_obj.balance = new_ballance;
}

int main() { 
    
    setlocale(LC_ALL, "Rus");

    PersonAccount acc1;

    std::cout << "Введите имя владельца: ";
    std::cin >> acc1.name;
    
    std::cout << "Введите номер счёта: ";
    std::cin >> acc1.account_number;

    std::cout << "Введите баланс: ";
    std::cin >> acc1.balance;

    do
    {
        double new_balance;
        std::cout << "Текущий баланс: $" << acc1.balance << std::endl;
        std::cout << "Введите новый баланс (0 для выхода или установки 0 баланса.): ";
        std::cin >> new_balance;
        if (new_balance == 0) {
            std::string command;
            std::cout << "Вы ввели баланс 0: yes = баланс 0 / exit = выход: ";
            std::cin >> command;
            if (command == "exit") break;
        }
        changeBalance(acc1, new_balance);
    } while (true);
    
    std::printf("Ваш счёт: %s, %i, $%.2f.", acc1.name.c_str(), acc1.account_number, acc1.balance);

    return 0;
}
