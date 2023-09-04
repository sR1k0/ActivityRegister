//
// Created by sk on 14/08/23.
//

// You may need to build the project (run Qt uic code generator) to get "ui_qtactivity.h" resolved

#include "qtactivity.h"
#include "ui_qtactivity.h"

namespace ACT_I {
    qtactivity::qtactivity(QWidget *parent) :
            QWidget(parent), ui(new Ui::qtactivity) {
        ui->setupUi(this);
    }

    qtactivity::~qtactivity() {
        delete ui;
    }
} // ACT_I
