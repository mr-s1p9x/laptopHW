#ifndef LAPTOPHM_HDD_H
#define LAPTOPHM_HDD_H

// Класс HDD представляет жесткий диск компьютера
// В классе есть два члена: model (модель жесткого диска) и price (цена)

class HDD
{
public:
    char* model; // Указатель на строку, представляющую модель жесткого диска
    double price; // Цена жесткого диска

    // Конструктор для инициализации модели и цены
    HDD(char* model, double price) : model(model), price(price){}
};

#endif //LAPTOPHM_HDD_H
