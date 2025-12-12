#include "aboutme.h"
#include "ui_aboutme.h"

AboutMe::AboutMe(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AboutMe)
{
    ui->setupUi(this);
    setWindowTitle("About Developer");
    setFixedSize(427,348);
    ui->mainlogo->setScaledContents(true);
    ui->website->setText("<a href='techfoxofficial.github.io'>techfoxofficial.github.io</a>");
}

AboutMe::~AboutMe()
{
    delete ui;
}
