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
    ui->xValueLabel->setText(tr("%1").arg(x()));
    ui->yValueLabel->setText(tr("%1%").arg(y()));

    ui->frmValueLabel->setText(tr("%1, %2, %3, %4").arg(frameGeometry().x())
                               .arg(frameGeometry().y()).arg(frameGeometry().width())
                               .arg(frameGeometry().height()));

    ui->posValueLabel->setText(tr("%1, %2").arg(pos().x()).arg(pos().y()));

    QString temp1, temp2, temp3, temp4;
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
