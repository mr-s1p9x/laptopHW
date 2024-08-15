#ifndef LAPTOPHM_CPU_H
#define LAPTOPHM_CPU_H

// Класс CPU представляет центральный процессор пк
// В классе есть два члена: model (модель цп) и price (цена)

class CPU
{
public:
    char* model; // Указатель на строку, представляющую модель процессора
    double price; // Цена процессора

    // Конструктор для инициализации модели и цены
    CPU(char* model, double price) : model(model), price(price) {}
};

#endif //LAPTOPHM_CPU_H
