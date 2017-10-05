#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileSystemModel>
#include <QCloseEvent>
#include <QSystemTrayIcon>
#include <QAction>
#include <QSyntaxHighlighter>
#include <QWebEngineView>
#include <QSortFilterProxyModel>
#include <QSettings>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent * event);

private slots:
    void on_treeView_clicked(const QModelIndex &index);

    void on_listView_clicked(const QModelIndex &index);

    void readfile( QString path,  QString type );



    void iconActivated(QSystemTrayIcon::ActivationReason reason);



    void on_fitBtn_clicked();

    void on_openBtn_clicked();

    void on_treeBtn_clicked(bool checked);

    void on_listBtn_clicked(bool checked);
    void setAllToolTip();


    void displayText(QString text);
    void displayInfo(QString path);
    void on_comboBox_activated(const QString &arg1);

    void on_listView_doubleClicked(const QModelIndex &index);


    void on_zoomSlider_valueChanged(int value);

    void on_addBtn_clicked();

    void on_deleteBtn_clicked();

    void on_saveBtn_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void filterResults(const QString &filter);
    void setDefaultSettings();
    void setBtnIcons();

private:
    Ui::MainWindow *ui;
    QFileSystemModel *dirmodel;
    QWebEnginePage *page;
    QFileSystemModel *filemodel;
    QString path;
    QSystemTrayIcon *trayIcon;
    QSortFilterProxyModel * proxymodel;
    QString folder_path;
    QString file_info;
    bool areFitting;
    QString appFilePath;
    QSettings settings;

};

#endif // MAINWINDOW_H
