#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QTimer>

class Enemy: public QObject, public QGraphicsPixmapItem /// Класс Врага
{
    Q_OBJECT
    
    /// Здоровье Врага
    int Health;
public:
    /// Конструктор
    Enemy(int Difficulty);

    /// Деструктор
    ~Enemy() = default;

    /// Таймер состояния
    QTimer *timer;

public slots:
    /// Передвижение
    void Move();
};

#endif // ENEMY_H
