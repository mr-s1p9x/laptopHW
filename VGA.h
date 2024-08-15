#ifndef LAPTOPHM_VGA_H
#define LAPTOPHM_VGA_H

// Класс VGA представляет видеокарту компьютера
// В классе есть три члена: model (модель видеокарты), memory (объем видеопамяти), и price (цена)

class VGA{
public:
    char* model; // Указатель на строку, представляющую модель видеокарты
    int memory; // Объем видеопамяти в мегабайтах
    double price; // Цена видеокарты

    VGA(char* model, int memory, double price) : model(model), memory(memory), price(price) {}
};

#endif //LAPTOPHM_VGA_H
