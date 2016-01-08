#ifndef APPGROUPICONFRAME_H
#define APPGROUPICONFRAME_H

#include <QtCore>
#include <QtGui>
#include <QtWidgets>

class AppGroupIconFrame : public QFrame
{
    Q_OBJECT
public:
    explicit AppGroupIconFrame(QWidget *parent = 0);
    ~AppGroupIconFrame();
    static QPixmap getPixmap(QStringList icons);
    static QPixmap getPixmap(QList<QPixmap> icons);

protected:
    void paintEvent(QPaintEvent *e) Q_DECL_OVERRIDE;
};

#endif // APPGROUPICONFRAME_H
