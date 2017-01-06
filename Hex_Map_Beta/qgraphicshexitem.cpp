#include "qgraphicshexitem.h"

QGraphicsHexItem::QGraphicsHexItem()
{

}

void QGraphicsHexItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    float x = 0;
    float x_1 = 0;
    int y = 0;
    int y_1 = 0;
    int next_int = 0;
    int next_int_2 = 1;
    float scale = 20.99;
    QPointF point2[6] = {QPointF(x_1 + (2.0 * scale), y_1 + (1 * scale)), QPointF(x_1 + (4.0 * scale), y_1 + (1 * scale)), QPointF(x_1 + (5.5 * scale), y_1 + (3.0 * scale)), QPointF(x_1 + (4.0 * scale), y_1 + (5.0 * scale)), QPointF(x_1 + (2.0 * scale), y_1 + (5.0 * scale)), QPoint(x_1 + (0.5 * scale), y_1 + (3.0 * scale))};
    painter->drawPolygon(point2, 6);
}
