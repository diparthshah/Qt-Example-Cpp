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

private slots:
    void on_actionnew_triggered();

    void on_actionopen_triggered();

    void on_actionexit_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
