#include "health.h"

Health::Health(int Shift)
{
    setPixmap(QPixmap(":/tex/Heart32"));
    setScale(1);

    int Position = 625 + Shift;
    setPos(Position, 50);
}
