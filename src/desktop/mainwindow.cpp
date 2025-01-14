#include "mainwindow.h"

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  setWindowTitle("3D Viewer V2.0");
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_pushButtonOpenFile_clicked() {
  QString filterFile = " OBJ Files (*.obj)";
  // В filePath записываем путь к файлу выбранного пользователем
  QString filePath = QFileDialog::getOpenFileName(this, "Open file",
                                                  QDir::homePath(), filterFile);

  if (!filePath.isEmpty() && !filePath.isNull()) {
    // В fileName записывается имя файла по пути из filePath
    QString fileName = filePath.mid(filePath.lastIndexOf('/') + 1);
    // Ниже обработка ошибки от парсера
    if (1) {
    } else {
      QMessageBox messageBox;
      messageBox.critical(0, "Error", "Error open file!");
      messageBox.setFixedSize(200, 200);
    }
  }
}

void MainWindow::on_pushButtonSave_clicked() { hide(); }

void MainWindow::on_pushButtonReset_clicked() { hide(); }
