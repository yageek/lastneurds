#ifndef NEURONEITEM_H
#define NEURONEITEM_H

#include <QGraphicsItem>

class NeuroneItem : public QGraphicsItem
{
public:
    NeuroneItem();


     QRectF boundingRect() const;
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
                QWidget *widget);
};

#endif // NEURONEITEM_H
