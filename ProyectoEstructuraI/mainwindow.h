#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "archivo.h"
#include "lista.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void Dibujar(Lista * Lis);

private slots:
    void on_CrearArchivo_clicked();

    void on_Refrescar_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
