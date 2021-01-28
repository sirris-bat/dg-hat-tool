#include "hattool.h"
#include "ui_hattool.h"

HatTool::HatTool(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HatTool)
{
    ui->setupUi(this);
}

HatTool::~HatTool()
{
    delete ui;
}

