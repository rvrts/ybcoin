#include "yblabel.h"

YbLabel::YbLabel(QString text, labelType type, QWidget *parent) :
    QLabel(parent)
{
    setText(text);
    setLabelType(type);
}

void YbLabel::setLabelType(labelType type)
{
    switch (type) {
    case enable:
        setFixedHeight(20);
        setStyleSheet("QLabel{background-color: rgb(0, 205, 102); border-radius: 3px;}");
        break;
    case forbidden:
        setFixedHeight(20);
        setStyleSheet("QLabel{background-color: rgb(250, 128, 114); border-radius: 3px;}");
        break;
    case warning:
        setFixedHeight(50);
        setStyleSheet("QLabel{background-color: rgb(255, 231, 186); border-radius: 3px;}");
    default:
        break;
    }
}