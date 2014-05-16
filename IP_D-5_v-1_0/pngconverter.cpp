#include "pngconverter.h"
#include "ui_pngconverter.h"

pngconverter::pngconverter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pngconverter)
{
    ui->setupUi(this);
}

pngconverter::~pngconverter()
{
    delete ui;
}
