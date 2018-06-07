#pragma once

#include <QtCore/QObject>
#include <QtTest/QtTest>

namespace Mayo {

class Test : public QObject {
  Q_OBJECT

private slots:
  void Quantity_test();
  void UnitSystem_test();
};

} // namespace Mayo