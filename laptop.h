#ifndef LAPTOPHM_LAPTOP_H
#define LAPTOPHM_LAPTOP_H
#include <iostream>

#include "HDD.h"
#include "RAM.h"
#include "CPU.h"
#include "VGA.h"
using namespace std;

// Клас laptop представляет собой ноутбук, состоящий из различных компонентов,
// таких как HDD, RAM, CPU и VGA. В этом классе также содержится статическое поле
// для подсчета кол-ва компонентов и статический метод для его отображения

class Laptop
{
private:
    HDD hdd; // Объект HDD, представляющий жесткий диск ноутбука
    RAM ram; // Объект RAM, представляющий оперативную память ноутбука
    CPU cpu; // Объект CPU, представляющий процессор ноутбука
    VGA vga; // Объект VGA, представляющий видеокарту ноутбука

public:
    static int componentCount; // Стат поле для хранения кол-ва компонентов

    // Конструктор, который инициализирует все компоненты ноутбука
    Laptop(HDD hdd, RAM ram, CPU cpu, VGA vga) : hdd(hdd), ram(ram), cpu(cpu), vga(vga)
    {
        componentCount = 4; // У нас 4 компонента: HDD, RAM, CPU, VGA
    }

    // Статический метод для отображения кол-ва компонентов
    static void showComponentCount()
    {
        cout << "Number of components: " << componentCount << endl;
    }

    // Метод для отображения информации о всех компонентах ноутбука
    void displayComponents()
    {
        cout << "HDD Model: " << hdd.model << ", Price: " << hdd.price << endl;
        cout << "RAM Model: " << ram.model << ", Size: " << ram.memory << ", Price: " << ram.price << endl;
        cout << "CPU Model: " << cpu.model << ", Price: " << cpu.price << endl;
        cout << "VGA Model: " << vga.model << ", Size: " << vga.memory << ", Price: " << vga.price << endl;
    }
};

// Инициализация статического поля вне класса
int Laptop::componentCount = 0;

#endif //LAPTOPHM_LAPTOP_H
