#pragma once

#include <QtWidgets/QWidget>
#include "ui_ToDo.h"
#include <QDate>
#include <QDir>

class ToDo : public QWidget
{
    Q_OBJECT

public:
    ToDo(QWidget *parent = nullptr);

    ~ToDo();

private:
    Ui::ToDoClass ui;

public:
    void initStylesheet();
    void createNewTask(QString taskName, QString date);

public slots:
    void SlotAddNewTask();
    void SlotDeleteTask();

signals:
    void SignalAddNewTask(QString taskName, QString date); // incase you wonder how to create custom signal. Useful when you want to call this signal in other classes/widgets

};
