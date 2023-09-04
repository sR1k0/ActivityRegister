//
// Created by sk on 14/08/23.
//

// You may need to build the project (run Qt uic code generator) to get "ui_qtregister.h" resolved

#include "qtregister.h"
#include "ui_qtregister.h"

namespace REG_I {
    qtregister::qtregister(QWidget *parent) :
            QWidget(parent), ui(new Ui::qtregister) {
        ui->setupUi(this);
    }

    qtregister::~qtregister() {
        delete ui;
    }

    void qtregister::addActivity(int i,ACT_I::qtactivity* a) {
        map.insert(i,a);
    }


} // REG_I
