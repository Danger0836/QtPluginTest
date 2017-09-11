#ifndef TESTPLGUIN_H
#define TESTPLGUIN_H

#include <QQuickItem>

class TestPlguin : public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(TestPlguin)

public:
    TestPlguin(QQuickItem *parent = 0);
    ~TestPlguin();
};

#endif // TESTPLGUIN_H
