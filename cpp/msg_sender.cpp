#include "msg_sender.h"
#include "ui_msg_sender.h"

MsgSender::MsgSender(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MsgSender)
{
    ui->setupUi(this);
}

MsgSender::~MsgSender()
{
    delete ui;
}
