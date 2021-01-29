#ifndef DETAIL_H
#define DETAIL_H

#include <QComboBox>
#include <QGridLayout>
#include <QLabel>
#include <QTextEdit>
#include <QWidget>

class Detail : public QWidget
{
    Q_OBJECT
public:
    explicit Detail(QWidget *parent = nullptr);

signals:

public slots:

private:
    QLabel *NationalLabel;
    QComboBox *NationalComboBox;
    QLabel *ProvinceLabel;
    QComboBox *ProvinceComboBox;
    QLabel *CityLabel;
    QLineEdit *CityLineEdit;
    QLabel *IntroductLabel;
    QTextEdit *IntroductTextEdit;
    QGridLayout *mainLayout;
};

#endif // DETAIL_H
