#ifndef TESTPLUGIN_PLUGIN_H
#define TESTPLUGIN_PLUGIN_H

#include <QQmlExtensionPlugin>

class TestPluginPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

public:
    void registerTypes(const char *uri);
};

#endif // TESTPLUGIN_PLUGIN_H
