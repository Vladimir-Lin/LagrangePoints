#include "LagrangePoints.hpp"
#include "ui_LagrangePoints.h"


int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  LagrangePoints w;
  w.show();

  return a.exec();
}


LagrangePoints::LagrangePoints(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::LagrangePoints)
{
  ui->setupUi(this);
}

LagrangePoints::~LagrangePoints()
{
  delete ui;
}
