#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDir>
#include <QFileDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QMouseEvent>
#include <QOpenGLFunctions>
#include <QOpenGLWidget>
#include <QSettings>
#include <QTimer>
#include <QWidget>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private slots:
  void on_pushButtonOpenFile_clicked();
  void on_pushButtonSave_clicked();
  void on_pushButtonReset_clicked();

 private:
  Ui::MainWindow *ui;
};
#endif  // MAINWINDOW_H
