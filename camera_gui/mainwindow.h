#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_up_button_clicked();
    void on_right_button_clicked();
    void on_left_button_clicked();
    void on_joystick_radio_clicked();
    void on_gui_radio_clicked();
    void on_down_button_clicked();

    void on_ip_address_edit_textChanged();

    void on_port_edit_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    bool joystick;
    bool gui;

};

#endif // MAINWINDOW_H
