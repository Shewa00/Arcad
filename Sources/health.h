#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsPixmapItem>

class Health : public QGraphicsPixmapItem   /// Класс Жизней Игрока
{
public:
    /// Конструктор
    Health(int Shift);

    /// Деструктор
    ~Health() = default;
};

#endif // HEALTH_H
