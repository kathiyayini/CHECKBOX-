#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void oncheckBox1_clicked();
    void oncheckBox2_clicked();
    void onradioButton1_clicked();
    void onradioButton2_clicked();
    void onradioButton3_clicked();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
