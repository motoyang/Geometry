#include "geometry.h"
#include "ui_geometry.h"

Geometry::Geometry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Geometry)
{
    ui->setupUi(this);
}

Geometry::~Geometry()
{
    delete ui;
}
