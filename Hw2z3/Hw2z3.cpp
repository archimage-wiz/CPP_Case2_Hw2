#include <iostream>

struct Address {
    std::string city;
    std::string street;
    unsigned int house_number;
    unsigned int room_number;
    unsigned int index;
    Address(std::string city, std::string street, unsigned int house_number, unsigned int room_number, unsigned int index) {
        this->city = city;
        this->street = street;
        this->house_number = house_number;
        this->room_number = room_number;
        this->index = index;
    }
};

void printStructure(Address &addr_struct){
    std::cout << "Город: " + addr_struct.city << std::endl;
    std::cout << "Улица: " + addr_struct.city << std::endl;
    std::cout << "Номер дома: " << addr_struct.house_number << std::endl;
    std::cout << "Номер квартиры: " << addr_struct.room_number << std::endl;
    std::cout << "Индекс: " << addr_struct.index << std::endl;
}

int main() { setlocale(LC_ALL, "Ru");

    Address addr1 ("Москва", "Арбат", 12, 8, 123456);
    Address * addr2 = new Address("Ижевск", "Пушкина", 59, 143, 953769);

    printStructure(addr1);
    std::cout << std::endl;
    printStructure( *addr2);

    //delete addr1;
    delete addr2;

}
