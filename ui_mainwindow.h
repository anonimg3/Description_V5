/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_3;
    QSplitter *splitter_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    QTreeView *treeView;
    QListView *listView;
    QGroupBox *groupBox;
    QCheckBox *trayChckBx;
    QToolButton *fitBtn;
    QToolButton *openBtn;
    QComboBox *comboBox;
    QSlider *zoomSlider;
    QLabel *zoomLbl;
    QToolButton *addBtn;
    QToolButton *deleteBtn;
    QToolButton *saveBtn;
    QLineEdit *lineEdit;
    QToolButton *treeBtn;
    QToolButton *listBtn;
    QWebEngineView *webEngineView;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1327, 509);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_3 = new QHBoxLayout(centralWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        frame = new QFrame(splitter_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(300, 0));
        frame->setMaximumSize(QSize(600, 16777215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        splitter = new QSplitter(frame);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        treeView = new QTreeView(splitter);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setEnabled(true);
        treeView->setAnimated(true);
        splitter->addWidget(treeView);
        listView = new QListView(splitter);
        listView->setObjectName(QStringLiteral("listView"));
        splitter->addWidget(listView);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setMinimumSize(QSize(70, 0));
        groupBox->setMaximumSize(QSize(70, 16777215));
        trayChckBx = new QCheckBox(groupBox);
        trayChckBx->setObjectName(QStringLiteral("trayChckBx"));
        trayChckBx->setGeometry(QRect(7, 90, 55, 31));
        fitBtn = new QToolButton(groupBox);
        fitBtn->setObjectName(QStringLiteral("fitBtn"));
        fitBtn->setEnabled(false);
        fitBtn->setGeometry(QRect(37, 40, 25, 25));
        openBtn = new QToolButton(groupBox);
        openBtn->setObjectName(QStringLiteral("openBtn"));
        openBtn->setGeometry(QRect(7, 40, 25, 25));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 290, 51, 21));
        comboBox->setEditable(true);
        comboBox->setMaxVisibleItems(5);
        zoomSlider = new QSlider(groupBox);
        zoomSlider->setObjectName(QStringLiteral("zoomSlider"));
        zoomSlider->setGeometry(QRect(10, 320, 41, 16));
        zoomSlider->setMaximumSize(QSize(200, 16777215));
        zoomSlider->setMinimum(20);
        zoomSlider->setMaximum(200);
        zoomSlider->setSingleStep(5);
        zoomSlider->setPageStep(5);
        zoomSlider->setSliderPosition(100);
        zoomSlider->setOrientation(Qt::Horizontal);
        zoomLbl = new QLabel(groupBox);
        zoomLbl->setObjectName(QStringLiteral("zoomLbl"));
        zoomLbl->setGeometry(QRect(20, 340, 59, 14));
        addBtn = new QToolButton(groupBox);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(10, 370, 41, 21));
        deleteBtn = new QToolButton(groupBox);
        deleteBtn->setObjectName(QStringLiteral("deleteBtn"));
        deleteBtn->setGeometry(QRect(10, 350, 41, 21));
        saveBtn = new QToolButton(groupBox);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));
        saveBtn->setGeometry(QRect(10, 390, 41, 21));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(7, 70, 55, 22));
        treeBtn = new QToolButton(groupBox);
        treeBtn->setObjectName(QStringLiteral("treeBtn"));
        treeBtn->setGeometry(QRect(7, 10, 25, 25));
        treeBtn->setCheckable(true);
        treeBtn->setChecked(true);
        listBtn = new QToolButton(groupBox);
        listBtn->setObjectName(QStringLiteral("listBtn"));
        listBtn->setGeometry(QRect(37, 10, 25, 25));
        listBtn->setCheckable(true);
        listBtn->setChecked(true);
        splitter->addWidget(groupBox);

        horizontalLayout_2->addWidget(splitter);

        splitter_2->addWidget(frame);
        webEngineView = new QWebEngineView(splitter_2);
        webEngineView->setObjectName(QStringLiteral("webEngineView"));
        webEngineView->setProperty("url", QVariant(QUrl(QStringLiteral("about:blank"))));
        splitter_2->addWidget(webEngineView);

        horizontalLayout_3->addWidget(splitter_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1327, 22));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Description v5.0", Q_NULLPTR));
        groupBox->setTitle(QString());
        trayChckBx->setText(QApplication::translate("MainWindow", "Tray", Q_NULLPTR));
        fitBtn->setText(QApplication::translate("MainWindow", "Fit", Q_NULLPTR));
        openBtn->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        zoomLbl->setText(QApplication::translate("MainWindow", "100%", Q_NULLPTR));
        addBtn->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        deleteBtn->setText(QApplication::translate("MainWindow", "Del", Q_NULLPTR));
        saveBtn->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        treeBtn->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        listBtn->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
