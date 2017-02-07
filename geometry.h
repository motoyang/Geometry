#ifndef GEOMETRY_H
#define GEOMETRY_H

#include <QDialog>

namespace Ui {
class Geometry;
}

class Geometry : public QDialog
{
    // test
    Q_OBJECT

public:
    explicit Geometry(QWidget *parent = 0);
    ~Geometry();

    void updateLabel();

protected:
    void moveEvent(QMoveEvent *);
    void resizeEvent(QResizeEvent *);

private:
    Ui::Geometry *ui;
};

#endif // GEOMETRY_H
