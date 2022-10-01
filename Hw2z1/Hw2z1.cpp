#include <iostream>


enum class Months { 
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    octember,
    november,
    december,
};

void print(std::string text){
    std::cout << text << std::endl;
}

int main(int argc, const char** argv) {

    setlocale(LC_ALL, "Ru");
    Months number_month = static_cast<Months>(-1);

    while(static_cast<int>(number_month) != 0) {
        std::cout << "Введите номер месяца: ";
        int * in_val = new int;
        std::cin >> * in_val; // std::cin >> number_month; How ?
        number_month = static_cast<Months>(*in_val);
        delete in_val;
        if (static_cast<int>(number_month) >= 0 && static_cast<int>(number_month) <= 12) {
            switch (number_month) {
                case Months::january: print("Январь"); break;
                case Months::february: print("Февраль"); break;
                case Months::march: print("Март"); break;
                case Months::april: print("Апрель"); break;
                case Months::may: print("Май"); break;
                case Months::june: print("Июнь"); break;
                case Months::july: print("Июль"); break;
                case Months::august: print("Август"); break;
                case Months::september: print("Сеньтябрь"); break;
                case Months::octember: print("Октябрь"); break;
                case Months::november: print("Ноябрь"); break;
                case Months::december: print("Декабрь"); break;
            }
        } else print("Некорректный месяц!");
    }

    std::cout << "The end." << std::endl;

    return 0;
}