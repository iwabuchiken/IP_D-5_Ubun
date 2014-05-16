#include "pngconverter.h"
#include "ui_pngconverter.h"

#include <QMessageBox>

pngconverter::pngconverter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pngconverter), proc_Conv(0), proc_Viewer(0)
{
    ui->setupUi(this);

    editor = new TextEdit;

    assistant = new Assistant;
}

pngconverter::~pngconverter()
{
    delete ui;
}

void pngconverter::on_BT_Choose_1_clicked()
{

    QTextEdit *te = ui->TE_Input_1;

    FindFileDialog dialog(editor, assistant, te);

    dialog.exec();
//    _quit_App();
}

void pngconverter::on_BT_Choose_2_clicked()
{

}

void pngconverter::on_BT_Quit_clicked()
{
    _quit_App();

}

void pngconverter::on_BT_Viewer_clicked()
{

}

void pngconverter::on_BT_Convert_clicked()
{

}

void pngconverter::_quit_App()
{
    QString title = "png converter";

    QString msg;

    msg += "\nDo you really want to quit?\n";

    QMessageBox messageBox;
    messageBox.setWindowTitle(title);
//    messageBox.setWindowTitle(tr("png converter"));

    messageBox.setText(msg);

    messageBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    messageBox.setDefaultButton(QMessageBox::No);
    if (messageBox.exec() == QMessageBox::Yes)
        qApp->quit();


}
