#include "Farn.h"
#include <QtGui>
#include <sys/time.h>

Farn::Farn(QWidget *parent):QWidget(parent)
{
	setFixedSize(700,700);
	move(QApplication::desktop()->screenGeometry().width()/2-size().width()/2, QApplication::desktop()->screenGeometry().height()/2 - size().height()/2 - 10);
	a1 = new QDoubleSpinBox(this);
	a2 = new QDoubleSpinBox(this);
	a3 = new QDoubleSpinBox(this);
	a4 = new QDoubleSpinBox(this);
	b1 = new QDoubleSpinBox(this);
	b2 = new QDoubleSpinBox(this);
	b3 = new QDoubleSpinBox(this);
	b4 = new QDoubleSpinBox(this);
	c1 = new QDoubleSpinBox(this);
	c2 = new QDoubleSpinBox(this);
	c3 = new QDoubleSpinBox(this);
	c4 = new QDoubleSpinBox(this);
	d1 = new QDoubleSpinBox(this);
	d2 = new QDoubleSpinBox(this);
	d3 = new QDoubleSpinBox(this);
	d4 = new QDoubleSpinBox(this);
	e1 = new QDoubleSpinBox(this);
	e2 = new QDoubleSpinBox(this);
	e3 = new QDoubleSpinBox(this);
	e4 = new QDoubleSpinBox(this);
	f1 = new QDoubleSpinBox(this);
	f2 = new QDoubleSpinBox(this);
	f3 = new QDoubleSpinBox(this);
	f4 = new QDoubleSpinBox(this);
	
	int width0 = a1->width()/2;
	int height0 = a1->height()*3/4;
	
	a1->move(width0*0,0);
	b1->move(width0*1,0);
	c1->move(width0*2,0);
	d1->move(width0*3,0);
	e1->move(width0*4,0);
	f1->move(width0*5,0);
	
	a2->move(width0*0,height0*1);
	b2->move(width0*1,height0*1);
	c2->move(width0*2,height0*1);
	d2->move(width0*3,height0*1);
	e2->move(width0*4,height0*1);
	f2->move(width0*5,height0*1);
	
	a3->move(width0*0,height0*2);
	b3->move(width0*1,height0*2);
	c3->move(width0*2,height0*2);
	d3->move(width0*3,height0*2);
	e3->move(width0*4,height0*2);
	f3->move(width0*5,height0*2);
	
	a4->move(width0*0,height0*3);
	b4->move(width0*1,height0*3);
	c4->move(width0*2,height0*3);
	d4->move(width0*3,height0*3);
	e4->move(width0*4,height0*3);
	f4->move(width0*5,height0*3);
	
	a1->setSingleStep(0.01);
	a1->setRange(-2,2);
	a2->setSingleStep(0.01);
	a2->setRange(-2,2);
	a3->setSingleStep(0.01);
	a3->setRange(-2,2);
	a4->setSingleStep(0.01);
	a4->setRange(-2,2);
	b1->setSingleStep(0.01);
	b1->setRange(-2,2);
	b2->setSingleStep(0.01);
	b2->setRange(-2,2);
	b3->setSingleStep(0.01);
	b3->setRange(-2,2);
	b4->setSingleStep(0.01);
	b4->setRange(-2,2);
	c1->setSingleStep(0.01);
	c1->setRange(-2,2);
	c2->setSingleStep(0.01);
	c2->setRange(-2,2);
	c3->setSingleStep(0.01);
	c3->setRange(-2,2);
	c4->setSingleStep(0.01);
	c4->setRange(-2,2);
	d1->setSingleStep(0.01);
	d1->setRange(-2,2);
	d2->setSingleStep(0.01);
	d2->setRange(-2,2);
	d3->setSingleStep(0.01);
	d3->setRange(-2,2);
	d4->setSingleStep(0.01);
	d4->setRange(-2,2);
	e1->setSingleStep(0.01);
	e1->setRange(-2,2);
	e2->setSingleStep(0.01);
	e2->setRange(-2,2);
	e3->setSingleStep(0.01);
	e3->setRange(-2,2);
	e4->setSingleStep(0.01);
	e4->setRange(-2,2);
	f1->setSingleStep(0.01);
	f1->setRange(-2,2);
	f2->setSingleStep(0.01);
	f2->setRange(-2,2);
	f3->setSingleStep(0.01);
	f3->setRange(-2,2);
	f4->setSingleStep(0.01);
	f4->setRange(-2,2);
	
	a1_val = 0.85;
	a2_val = 0.2;
	a3_val = -0.15;
	a4_val = 0;
	b1_val = 0.04;
	b2_val = -0.26;
	b3_val = 0.28;
	b4_val = 0;
	c1_val = -0.04;
	c2_val = 0.23;
	c3_val = 0.26;
	c4_val = 0;
	d1_val = 0.85;
	d2_val = 0.22;
	d3_val = 0.24;
	d4_val = 0.16;
	e1_val = 0;
	e2_val = 0;
	e3_val = 0;
	e4_val = 0;
	f1_val = 1.6;
	f2_val = 1.6;
	f3_val = 0.44;
	f4_val = 0;
	
	a1->setValue(a1_val);
	a2->setValue(a2_val);
	a3->setValue(a3_val);
	a4->setValue(a4_val);
	b1->setValue(b1_val);
	b2->setValue(b2_val);
	b3->setValue(b3_val);
	b4->setValue(b4_val);
	c1->setValue(c1_val);
	c2->setValue(c2_val);
	c3->setValue(c3_val);
	c4->setValue(c4_val);
	d1->setValue(d1_val);
	d2->setValue(d2_val);
	d3->setValue(d3_val);
	d4->setValue(d4_val);
	e1->setValue(e1_val);
	e2->setValue(e2_val);
	e3->setValue(e3_val);
	e4->setValue(e4_val);
	f1->setValue(f1_val);
	f2->setValue(f2_val);
	f3->setValue(f3_val);
	f4->setValue(f4_val);
	
	
	connect(a1, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(a2, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(a3, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(a4, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(b1, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(b2, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(b3, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(b4, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(c1, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(c2, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(c3, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(c4, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(d1, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(d2, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(d3, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(d4, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(e1, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(e2, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(e3, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(e4, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(f1, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(f2, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(f3, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	connect(f4, SIGNAL(valueChanged(double)),this,SLOT(updater()));
	drawn = true;
	pix = QPixmap(700,700);
}

void Farn::updater()
{
	drawn = true;
	update();
}

void Farn::paintEvent(QPaintEvent *event)
{
	if(drawn)
	{
	drawn = false;
	a1_val = a1->value();
	a2_val = a2->value();
	a3_val = a3->value();
	a4_val = a4->value();
	b1_val = b1->value();
	b2_val = b2->value();
	b3_val = b3->value();
	b4_val = b4->value();
	c1_val = c1->value();
	c2_val = c2->value();
	c3_val = c3->value();
	c4_val = c4->value();
	d1_val = d1->value();
	d2_val = d2->value();
	d3_val = d3->value();
	d4_val = d4->value();
	e1_val = e1->value();
	e2_val = e2->value();
	e3_val = e3->value();
	e4_val = e4->value();
	f1_val = f1->value();
	f2_val = f2->value();
	f3_val = f3->value();
	f4_val = f4->value();

	QPainter painter(&pix);
	painter.setBrush(Qt::white);
	painter.setPen(Qt::NoPen);
	painter.setWindow(0,0,12,12);
	painter.drawRect(0,0,12,12);
	painter.translate(QPoint(6,-1));
	painter.setPen(Qt::black);
	srand(time(0));
	int z;
	int h;
	QPointF current = QPointF((rand())%12-6,(rand())%12);
	QPointF merken = current;
	float temp_x;
	painter.setPen(Qt::darkGreen);
	for(int i = 0; i < 400000; i++)
	{
		z = rand()%200;  //schönere Farben
		h = rand()%100;
		painter.setPen(QColor(0,55+z, 0));  //schönere Farben
		if(h <= 84)
		{
			temp_x = current.x();
			current.setX(a1_val * current.x() + b1_val * current.y() + e1_val);
			current.setY(c1_val * temp_x + d1_val * current.y() + f1_val);
			//painter.setPen(QColor(0,55+z, 0));
			painter.drawPoint(QPointF(current.x(), 12-current.y()));
		}
		else if(h > 84 && h <= 91)
		{
			temp_x = current.x();
			current.setX(a2_val * current.x() + b2_val * current.y() + e2_val);
			current.setY(c2_val * temp_x + d2_val * current.y() + f2_val);
			//painter.setPen(QColor(0,55+z, 0));
			painter.drawPoint(QPointF(current.x(), 12-current.y()));
		}
		else if(h > 91 && h < 98)
		{
			temp_x = current.x();
			current.setX(a3_val * current.x() + b3_val * current.y() + e3_val);
			current.setY(c3_val * temp_x + d3_val * current.y() + f3_val);
			//painter.setPen(QColor(0,55+z, 0));
			painter.drawPoint(QPointF(current.x(), 12-current.y()));
		}
		else if(h >= 99)
		{
			temp_x = current.x();
			current.setX(a4_val * current.x() + b4_val * current.y() + e4_val);
			current.setY(c4_val * temp_x + d4_val * current.y() + f4_val);
			//painter.setPen(QColor(0,55+z, 0));
			painter.drawPoint(QPointF(current.x(), 12-current.y()));
		}
	}
	painter.setPen(QPen(Qt::red, 0.1,Qt::SolidLine,Qt::RoundCap));
	painter.drawPoint(QPointF(merken.x(), 12-merken.y()));
	}
	QPainter glob(this);
	glob.drawPixmap(0,0,700,700,pix);
}