#ifndef QGRAPHICSHEXITEM_H
#define QGRAPHICSHEXITEM_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>

class QGraphicsHexItem : public QGraphicsItem
{
public:
    explicit QGraphicsHexItem();

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // QGRAPHICSHEXITEM_H
