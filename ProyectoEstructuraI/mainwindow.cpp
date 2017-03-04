#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <string.h>
#include <iostream>
#include <stdio.h>

using namespace std;

QPushButton * Arre[100];
Lista* Raiz = new Lista();
bool Ok = true;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::Dibujar(Lista* Lis)
{
    Archivo * Temp = Lis->Inicio;
    int posx=0,posy=0;
        for(int i=0;i<Lis->cant;i++){

            Arre[i]=new QPushButton(this);
            Arre[i]->setText("");
            if(Temp->Tipo==1){
                //Arre[i]->setStyleSheet("border-image:url(:/imagen/Imagenes/resources/Folder.png");
                QPixmap pixmap("C:/Users/Julio/Desktop/ProyectoEstructuraI/resources/Folder.png");
                QIcon ButtonIcon(pixmap);
                Arre[i]->setIcon(ButtonIcon);
                Arre[i]->setIconSize(pixmap.rect().size());
            }
            if(Temp->Tipo==2){
                QPixmap pixmap("C:/Users/Julio/Desktop/ProyectoEstructuraI/resources/ArchivoText.png");
                QIcon ButtonIcon(pixmap);
                Arre[i]->setIcon(ButtonIcon);
                Arre[i]->setIconSize(pixmap.rect().size());
            }
            Arre[i]->setGeometry(10+(posx*120),10+(posy*120),100,100);
            posx++;
            Arre[i]->show();
            if(posx==5){
                posx=0;
                posy++;
            }
            Temp= Temp->Siguiente;
        }


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CrearArchivo_clicked()
{
    QString recibir = ui->Nombre->text();
    string nom = recibir.toLocal8Bit().constData();
    recibir = ui->Tipo->text();
    int ti = recibir.toInt(&Ok,10);
    Raiz->CrearArchivo(nom,ti);
    Dibujar(Raiz);
}

void MainWindow::on_Refrescar_clicked()
{
Dibujar(Raiz);
}
