#include <QWidget>
class QDoubleSpinBox;
class QPixmap;
class Farn: public QWidget
{
	Q_OBJECT
public:
	Farn(QWidget *parent = 0);
protected:
	void paintEvent(QPaintEvent *event);
private:
	QDoubleSpinBox *a1,*a2,*a3,*a4,*b1,*b2,*b3,*b4,*c1,*c2,*c3,*c4,*d1,*d2,*d3,*d4,*e1,*e2,*e3,*e4,*f1,*f2,*f3,*f4;
	double a1_val,a2_val,a3_val,a4_val,b1_val,b2_val,b3_val,b4_val,c1_val,c2_val,c3_val,c4_val,d1_val,d2_val,d3_val,d4_val,e1_val,e2_val,e3_val,e4_val,f1_val,f2_val,f3_val,f4_val;
	QPixmap pix;
	bool drawn;
private slots:
	void updater();
};
