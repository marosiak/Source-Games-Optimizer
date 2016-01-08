#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void Enabled(QString typ);

private slots:

    void on_GoodConnection__clicked(bool checked);

    void on_BadConnection__clicked(bool checked);

    void on_checkBox_6_clicked(bool checked);

    void on_spinBox_valueChanged(int arg1);

    void on_checkBox_clicked(bool checked);

    void on_checkBox_2_clicked(bool checked);

    void on_checkBox_3_clicked(bool checked);

    void on_checkBox_4_clicked(bool checked);

    void on_checkBox_5_clicked(bool checked);

    void setTextEdit();

    void AppendText(QString text);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
