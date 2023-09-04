//
// Created by sk on 14/08/23.
//

#ifndef ACTIVITYREGISTER_QTREGISTER_H
#define ACTIVITYREGISTER_QTREGISTER_H
#include <QMap>
#include <QWidget>
#include "qtactivity.h"

namespace REG_I {
    QT_BEGIN_NAMESPACE
    namespace Ui { class qtregister; }
    QT_END_NAMESPACE

    class qtregister : public QWidget {
    Q_OBJECT

    public:
        explicit qtregister(QWidget *parent = nullptr);
        virtual ~qtregister() override;
        void addActivity(int i, ACT_I::qtactivity *a);
    private:
        Ui::qtregister *ui;
        QMap<int, ACT_I::qtactivity *> map;
    };
} // REG_I

#endif //ACTIVITYREGISTER_QTREGISTER_H
