#ifndef SYBERHREGISTER_H
#define SYBERHREGISTER_H

#include <QObject>
#include <QQuickView>

#include "./qrcode/decodeworkspace.h"
#include "./qrcode/qtcamera.h"

class SyberhRegister: public QObject
{
    Q_OBJECT

public:
    SyberhRegister();
    virtual ~SyberhRegister();

    /*!
       \brief 将qrcode模块注册到QML对象中
     */
    void init(QQuickView * m_view);
};

#endif // SYBERHREGISTER_H
