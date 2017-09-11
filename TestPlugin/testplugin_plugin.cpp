#include "testplugin_plugin.h"
#include "testplguin.h"

#include <qqml.h>

void TestPluginPlugin::registerTypes(const char *uri)
{
    // @uri com.vrv.TestPlugin
    qmlRegisterType<TestPlguin>(uri, 1, 0, "TestPlguin");
}

