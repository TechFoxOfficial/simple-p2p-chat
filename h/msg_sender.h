#ifndef MSG_SENDER_H
#define MSG_SENDER_H

#include <QWidget>

namespace Ui {
class MsgSender;
}

class MsgSender : public QWidget
{
    Q_OBJECT

public:
    explicit MsgSender(QWidget *parent = nullptr);
    ~MsgSender();

private:
    Ui::MsgSender *ui;
};

#endif // MSG_SENDER_H
