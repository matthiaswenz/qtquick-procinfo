#include "cpuinforeader.h"
#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtQml>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    CPUInfoReader reader;
    qDebug(reader.readCPUInfo().toUtf8());

    qmlRegisterType<CPUInfoReader>("procinfo", 1, 0, "CPUInfoReader");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
