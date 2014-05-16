#ifndef PNGCONVERTER_H
#define PNGCONVERTER_H

#include "include/findfiledialog.h"
#include "include/textedit.h"
#include "include/assistant.h"


#include <QMainWindow>

namespace Ui {
class pngconverter;
}

class pngconverter : public QMainWindow
{
    Q_OBJECT

public:
    explicit pngconverter(QWidget *parent = 0);
    ~pngconverter();

private slots:
    void on_BT_Choose_1_clicked();

    void on_BT_Choose_2_clicked();

    void on_BT_Quit_clicked();

    void on_BT_Viewer_clicked();

    void on_BT_Convert_clicked();

private:
    Ui::pngconverter *ui;

    TextEdit *editor;
    Assistant *assistant;
    QTextEdit *te_dialog;

    QProcess *proc_Conv;
    QProcess *proc_Viewer;

    void _quit_App(void);

};

#endif // PNGCONVERTER_H
