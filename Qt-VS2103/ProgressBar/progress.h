#ifndef PROGRESS_H
#define PROGRESS_H

#include <QApplication>
#include <QWidget>
#include <QtGui>
#include <QDialog>
#include <QLabel>
#include <QComboBox>
#include  <QProgressBar>
//#include  <QTest>
#include  <QGridLayout>
#include  <QLineEdit>
#include  <QPushButton>
#include <QProgressDialog>


class Progress : public QDialog
{
    Q_OBJECT
public:
    Progress( QWidget *parent=0, Qt::WindowFlags  f=0 );
    ~Progress();
public:
    QLabel *numLabel; 
    QLineEdit *numLineEdit;
    QLabel *typeLabel; 
    QComboBox *typeComboBox;
    
    QProgressBar *progressBar;

    QPushButton *startPushButton;

private slots:
    void slotStart();

};


#endif 
