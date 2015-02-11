#ifndef CPUINFOREADER_H
#define CPUINFOREADER_H

#include <QObject>

class CPUInfoReader : public QObject
{
    Q_OBJECT
public:
    CPUInfoReader(QObject *parent = 0);

    Q_INVOKABLE QString readCPUInfo();

signals:

public slots:
};

#endif // CPUINFOREADER_H
