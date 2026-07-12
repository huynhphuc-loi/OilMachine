#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class HomePage;
}
QT_END_NAMESPACE

class HomePage : public QMainWindow
{
    Q_OBJECT

public:
    explicit HomePage(QWidget *parent = nullptr);
    ~HomePage() override;

private slots:
    void on_tuanHoanBtn_clicked();
    void on_TuanHoan_backBtn_clicked();
    void on_TuanHoan_nextBtn_clicked();

private:
    Ui::HomePage *ui;
};

#endif // HOMEPAGE_H
