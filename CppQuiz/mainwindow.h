#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "quizwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startBtn_clicked();
    bool checkLogin(const QString &username, const QString &pwd);

private:
    Ui::MainWindow *ui;
    QuizWindow *q;
};
#endif // MAINWINDOW_H
