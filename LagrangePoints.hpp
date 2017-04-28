#ifndef LAGRANGEPOINTS_HPP
#define LAGRANGEPOINTS_HPP

#include <QMainWindow>

namespace Ui {
  class LagrangePoints;
}

class LagrangePoints : public QMainWindow
{
  Q_OBJECT

public:
  explicit LagrangePoints(QWidget *parent = 0);
  ~LagrangePoints();

private:
  Ui::LagrangePoints *ui;
};

#endif // LAGRANGEPOINTS_HPP
