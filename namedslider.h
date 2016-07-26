/*

  Named slider
  Niels A. Moseley 2016

  License: GPLv2

*/

#ifndef namedslider_h
#define namedslider_h

#include <QWidget>
#include <QSlider>
#include <QLineEdit>
#include <QLabel>
#include <QHBoxLayout>
#include <QDoubleValidator>

class NamedSlider : public QWidget
{
    Q_OBJECT

public:
    NamedSlider(QString name, QWidget *parent);
    virtual ~NamedSlider() {};

    QSize sizeHint() const;

signals:
    void valueChanged(float v);

public slots:
    void editingFinished();
    void sliderChanged(int sliderValue);

protected:
    QHBoxLayout     *m_layout;
    QSlider         *m_slider;
    QLabel          *m_label;
    QLineEdit       *m_edit;
    QDoubleValidator m_validator;
    float           v;
};

#endif
