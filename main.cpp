#include "Activity.h"
#include "Activity.cpp"
#include "qtregister.h"
#include "qtregister.cpp"
#include <QApplication>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    REG_I::qtregister window;
    window.setWindowTitle("Register");
    window.show();




    string d;
    Activity activity("test1");
    activity.typeDescription(d);
    return app.exec();
}
