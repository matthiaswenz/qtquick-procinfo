#include "cpuinforeader.h"

#include <QProcess>
#include <QStringList>

CPUInfoReader::CPUInfoReader(QObject *parent) : QObject(parent)
{

}

QString CPUInfoReader::readCPUInfo()
{
    QProcess p;

    QString cmd;

#ifdef Q_OS_OSX
    cmd = "sysctl -n machdep.cpu.brand_string";
#endif
#ifdef Q_OS_LINUX
    cmd = "cat /proc/cpuinfo";
#endif
    p.start(cmd);
    if (!p.waitForFinished(500))
    {
        return "No cpu information available.";
    }
    QString result = QString(p.readAllStandardOutput());

    return result;
}
