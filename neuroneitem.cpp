#include "neuroneitem.h"
#include<QPainter>
 #include <QStyleOption>
NeuroneItem::NeuroneItem()
{

}


QRectF NeuroneItem::boundingRect() const{
return QRectF(0,0,30,30);


}
  void NeuroneItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
                          QWidget *widget){


   painter->setPen(Qt::NoPen);
     painter->setBrush(Qt::darkGray);
     painter->drawEllipse(3, 3, 20, 20);

     QRadialGradient gradient(10,10, 10);

         gradient.setColorAt(0, Qt::yellow);
         gradient.setColorAt(1, Qt::darkYellow);

     painter->setBrush(gradient);
     painter->setPen(QPen(Qt::black, 0));
     painter->drawEllipse(0, 0, 20, 20);
  }
