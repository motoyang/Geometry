#include "geometry.h"
#include "ui_geometry.h"

Geometry::Geometry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Geometry)
{
    ui->setupUi(this);
    updateLabel();
}

Geometry::~Geometry()
{
    delete ui;
}

void Geometry::updateLabel()
{
    QString xStr;
    ui->xValueLabel->setText(xStr.setNum(x()));

    QString yStr;
    ui->yValueLabel->setText(yStr.setNum(y()));

    QString frameStr;
    QString temp1, temp2, temp3, temp4;
    frameStr = temp1.setNum(frameGeometry().x()) + ", " + temp2.setNum(frameGeometry().y()) + ", "
            + temp3.setNum(frameGeometry().width()) + ", " + temp4.setNum(frameGeometry().height());
    ui->frmValueLabel->setText(frameStr);

    QString posStr;
    posStr = temp1.setNum(pos().x()) + ", " + temp2.setNum(pos().y());
    ui->posValueLabel->setText(posStr);

    QString geoStr;
    geoStr = temp1.setNum(geometry().x()) + ", " + temp2.setNum(geometry().y()) + ", "
            + temp3.setNum(geometry().width()) + ", " + temp4.setNum(geometry().height());
    ui->geoValueLabel->setText(geoStr);

    QString wStr, hStr;
    ui->widthValueLabel->setText(wStr.setNum(width()));
    ui->heightValueLabel->setText(hStr.setNum(height()));

    QString rectStr;
    rectStr = temp1.setNum(rect().x()) + ", " + temp2.setNum(rect().y()) + ", "
            + temp3.setNum(rect().width()) + ", " + temp4.setNum(rect().height());
    ui->rectValueLabel->setText(rectStr);

    QString sizeStr;
    sizeStr = temp1.setNum(size().width()) + ", " + temp2.setNum(size().height());
    ui->sizeValueLabel->setText(sizeStr);
}

void Geometry::moveEvent(QMoveEvent *)
{
    updateLabel();
}

void Geometry::resizeEvent(QResizeEvent *)
{
    updateLabel();
}
