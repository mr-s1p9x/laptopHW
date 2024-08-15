#include <iostream>
#include "laptop.h"

using namespace std;

int main() {
    // Создаем объекты для каждого компонента ноутбука
    HDD hdd("WD Blue", 75.99);
    RAM ram("Kingston", 16, 80.99);
    CPU cpu("Intel Core i7-7780HQ", 299.99);
    VGA vga("NVIDIA GTX 1060", 6, 250.99);

    // Создаем объект Laptop и инициализируем его компонентами
    Laptop myLaptop(hdd, ram, cpu, vga);

    // Вызываем метод для отображения информации о всех объектах
    myLaptop.displayComponents();

    // Вызываем статический метод для отображения кол-ва компонентов
    Laptop::showComponentCount();



    return 0;
}
