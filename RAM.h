#ifndef LAPTOPHM_RAM_H
#define LAPTOPHM_RAM_H

// Класс RAM представляет оперативную память пк
// В классе есть три члена: model (модель озу), memory (объем) и price (цена)

class RAM
{
public:
    char* model; // Указатель на строку, представляющую модель ОЗУ
    int memory; // Объем памяти в мегабайтах
    double price; // Цена ОЗУ

    // Конструктор для инициализации модели, объема памяти и цены
    RAM(char* model, int memory, double price) : model(model), memory(memory), price(price) {}
};

#endif //LAPTOPHM_RAM_H
