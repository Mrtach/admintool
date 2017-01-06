#ifndef SETTINGS
#define SETTINGS

#include "mainwindow.h"
#include <QSettings>
#include <QMap>

#define PORT_MAX 65535
#define PORT_MIN 49152

class Settings : public QSettings
{
public:
    Settings(MainWindow *main);
    ~Settings();
    void SetDefaultSettings();
    void ReadSettings();
    void SaveSettings();
    void GetAppIDListMap();
    void GetCtxCommands();
    QSettings *pSettings;
private:
    QSettings *pAppIds;
    MainWindow *pMain;
};

#endif // SETTINGS

