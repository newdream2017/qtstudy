#include "mywidget.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

// argc 命令行变量的数量  argv命令行变量的数组
int main(int argc, char *argv[])
{
    //a应用程序对象，在应用程序对象 有且仅有一个
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "01_FirstProject_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    //窗口对象 myWidget 父类->QWidget
    myWidget w;
    w.show();
    return a.exec();
}
