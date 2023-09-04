//
// Created by sk on 14/08/23.
//

#ifndef ACTIVITYREGISTER_QTACTIVITY_H
#define ACTIVITYREGISTER_QTACTIVITY_H

#include <QtWidgets>

namespace ACT_I {
    QT_BEGIN_NAMESPACE
    namespace Ui { class qtactivity; }
    QT_END_NAMESPACE

    class qtactivity : public QWidget {
    Q_OBJECT

    public:
        explicit qtactivity(QWidget *parent = nullptr);
        ~qtactivity() override;

    private:
        int i;
        Ui::qtactivity *ui;
    };
} // ACT_I

#endif //ACTIVITYREGISTER_QTACTIVITY_H
