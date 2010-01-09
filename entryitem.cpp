#include "entryitem.h"
#include<QPainter>
 #include <QStyleOption>
EntryItem::EntryItem()
{
}

QRectF EntryItem::boundingRect() const{
return QRectF(0,0,20,20);
}


void EntryItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
                          QWidget *widget){

painter->setPen(Qt::NoPen);
     painter->setBrush(Qt::darkGray);
     //painter->drawEllipse(3, 3, 20, 20);
     painter->drawRoundedRect(QRectF(3,3,10,10),5,5);


    /* QRadialGradient gradient(10,10, 10);

         gradient.setColorAt(0, Qt::yellow);
         gradient.setColorAt(1, Qt::darkYellow);

*/
     painter->setPen(QPen(Qt::blue, 0));
     painter->drawRoundedRect(QRectF(0,0,10,10),5,5);
}
