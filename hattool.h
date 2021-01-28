#ifndef HATTOOL_H
#define HATTOOL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class HatTool; }
QT_END_NAMESPACE

class HatTool : public QMainWindow
{
    Q_OBJECT

public:
    HatTool(QWidget *parent = nullptr);
    ~HatTool();

private:
    Ui::HatTool *ui;
};
#endif // HATTOOL_H
