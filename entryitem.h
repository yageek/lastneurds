#ifndef ENTRYITEM_H
#define ENTRYITEM_H

#include <QGraphicsItem>
class EntryItem : public QGraphicsItem
{
public:
    EntryItem();


     QRectF boundingRect() const;
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
                QWidget *widget);
};

#endif // ENTRYITEM_H
