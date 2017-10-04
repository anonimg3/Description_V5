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
    QToolButton *tree_tbtn;
    QToolButton *list_tbtn;
    QCheckBox *tray_checkbox;
    QToolButton *fitBtn;
    QToolButton *openBtn;
    QComboBox *comboBox;
    QSlider *zoomSlider;
    QLabel *zoomLbl;
    QToolButton *addBtn;
    QToolButton *deleteBtn;
    QToolButton *saveBtn;
    QLineEdit *lineEdit;
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

        horizontalLayout_2->addWidget(splitter);

        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(101, 0));
        tree_tbtn = new QToolButton(groupBox);
        tree_tbtn->setObjectName(QStringLiteral("tree_tbtn"));
        tree_tbtn->setGeometry(QRect(10, 30, 80, 20));
        tree_tbtn->setCheckable(true);
        tree_tbtn->setChecked(true);
        list_tbtn = new QToolButton(groupBox);
        list_tbtn->setObjectName(QStringLiteral("list_tbtn"));
        list_tbtn->setGeometry(QRect(10, 60, 80, 20));
        list_tbtn->setCheckable(true);
        list_tbtn->setChecked(true);
        tray_checkbox = new QCheckBox(groupBox);
        tray_checkbox->setObjectName(QStringLiteral("tray_checkbox"));
        tray_checkbox->setGeometry(QRect(10, 90, 85, 31));
        fitBtn = new QToolButton(groupBox);
        fitBtn->setObjectName(QStringLiteral("fitBtn"));
        fitBtn->setEnabled(false);
        fitBtn->setGeometry(QRect(10, 160, 21, 21));
        openBtn = new QToolButton(groupBox);
        openBtn->setObjectName(QStringLiteral("openBtn"));
        openBtn->setEnabled(false);
        openBtn->setGeometry(QRect(40, 160, 21, 22));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 280, 79, 22));
        comboBox->setEditable(true);
        comboBox->setMaxVisibleItems(5);
        zoomSlider = new QSlider(groupBox);
        zoomSlider->setObjectName(QStringLiteral("zoomSlider"));
        zoomSlider->setGeometry(QRect(10, 320, 71, 16));
        zoomSlider->setMaximumSize(QSize(200, 16777215));
        zoomSlider->setMinimum(20);
        zoomSlider->setMaximum(200);
        zoomSlider->setSingleStep(5);
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
        deleteBtn->setGeometry(QRect(50, 370, 41, 21));
        saveBtn = new QToolButton(groupBox);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));
        saveBtn->setGeometry(QRect(10, 390, 41, 21));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 130, 81, 22));

        horizontalLayout_2->addWidget(groupBox);

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
        groupBox->setTitle(QApplication::translate("MainWindow", "Control", Q_NULLPTR));
        tree_tbtn->setText(QApplication::translate("MainWindow", "Tree", Q_NULLPTR));
        list_tbtn->setText(QApplication::translate("MainWindow", "List", Q_NULLPTR));
        tray_checkbox->setText(QApplication::translate("MainWindow", "Minimize\n"
"to tray", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        fitBtn->setToolTip(QApplication::translate("MainWindow", "Fit image to width", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        fitBtn->setText(QApplication::translate("MainWindow", "Fit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        openBtn->setToolTip(QApplication::translate("MainWindow", "Open file in parent directory", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        openBtn->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        zoomLbl->setText(QApplication::translate("MainWindow", "100%", Q_NULLPTR));
        addBtn->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        deleteBtn->setText(QApplication::translate("MainWindow", "Del", Q_NULLPTR));
        saveBtn->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
