#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileSystemModel>
#include <QTextStream>
#include <QFile>
#include <QDesktopServices>
#include <QMessageBox>
#include <QDateTime>
#include <QUrl>
#include <QDebug>
#include <QWebEngineView>
#include <QSortFilterProxyModel>
#include <QtAwesome/QtAwesome.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    appFilePath =  qApp->applicationDirPath();


    page = new QWebEnginePage(this);

    proxymodel = new QSortFilterProxyModel();

    ui->addBtn->setAccessibleName("addBtn");
    ui->deleteBtn->setAccessibleName("deleteBtn");
    ui->saveBtn->setAccessibleName("saveBtn");
    ui->fitBtn->setAccessibleName("fitBtn");
    ui->openBtn->setAccessibleName("openBtn");
    ui->treeBtn->setAccessibleName("treeBtn");
    ui->listBtn->setAccessibleName("listBtn");


    ui->addBtn->setText( QChar(fa::pluscircle) );
    ui->deleteBtn->setText( QChar(fa::minuscircle) );
    ui->saveBtn->setText( QChar(fa::floppyo) );
    ui->fitBtn->setText( QChar(fa::arrowsalt) );
    ui->openBtn->setText( QChar(fa::folderopen) );
    ui->treeBtn->setText( QChar(fa::exchange) );
    ui->listBtn->setText( QChar(fa::exchange) );


    setAllToolTip();

    QFile styleSheet( ":/css/style.qss" );
//    QFile styleSheet( "./style.qss" );
    if (styleSheet.open(QIODevice::ReadOnly)) {
        qApp->setStyleSheet(styleSheet.readAll());
        styleSheet.close();
    }



    ui->statusBar->addWidget(ui->comboBox,1);
    ui->statusBar->addWidget(ui->addBtn);
    ui->statusBar->addWidget(ui->deleteBtn);
    ui->statusBar->addWidget(ui->saveBtn);
    ui->statusBar->addPermanentWidget(ui->zoomLbl);
    ui->statusBar->addPermanentWidget(ui->zoomSlider);

    areFitting = false;


/***  Tray   ***/
        trayIcon = new QSystemTrayIcon(this);
        trayIcon->setIcon(this->style()->standardIcon(QStyle::SP_DirIcon));


        QMenu * menu = new QMenu(this);
        QAction * viewWindow = new QAction(trUtf8("Show"), this);
        QAction * quitAction = new QAction(trUtf8("Close"), this);

        connect(viewWindow, SIGNAL(triggered()), this, SLOT(show()));
        connect(quitAction, SIGNAL(triggered()), this, SLOT(close()));

        menu->addAction(viewWindow);
        menu->addAction(quitAction);

        trayIcon->setContextMenu(menu);
        trayIcon->show();

        connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)),
                this, SLOT(iconActivated(QSystemTrayIcon::ActivationReason)));

/////////////////////////////////////////////////////////////////////////
        QString sPath = appFilePath;
        dirmodel = new QFileSystemModel(this);
        dirmodel->setRootPath(sPath);
        dirmodel->setFilter( QDir::NoDotAndDotDot | QDir::AllDirs );
        ui->treeView->setModel(dirmodel);

        filemodel = new QFileSystemModel(this);
        filemodel->setRootPath(sPath);
        filemodel->setFilter(QDir::NoDotAndDotDot | QDir::Files);
        ui->listView->setModel(filemodel);


/////////////////////////////////////////////////////////////////////////
        // load bookmarks
        QFile bookmarksFile(appFilePath + "/bookmarks.conf");
        QTextStream bookmarksStream(&bookmarksFile);
        if (bookmarksFile.open(QIODevice::ReadWrite | QIODevice::Text)){
            while (!bookmarksStream.atEnd()) { ui->comboBox->addItem( bookmarksStream.readLine() ); }
        }
        bookmarksFile.close();


        on_comboBox_activated(ui->comboBox->itemText(0));

        QtAwesome* awesome = new QtAwesome( qApp );
        awesome->initFontAwesome();     // This line is important as it loads the font and initializes the named icon map




}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    ui->openBtn->setEnabled(true);
    QString sPath = dirmodel->fileInfo(index).absoluteFilePath();
    ui->listView->setRootIndex(filemodel->setRootPath(sPath));
    path = sPath;
    displayInfo(sPath);
}

void MainWindow::on_listView_clicked(const QModelIndex &index)
{
    QString file_type = dirmodel->fileInfo(index).completeSuffix();
    folder_path = dirmodel->fileInfo( index ).absolutePath();

    ui->fitBtn->setEnabled( false );

    path = dirmodel->fileInfo(index).absoluteFilePath();

    if (file_type.toLower() == "txt") readfile( path, "textile" );
    else if (file_type.toLower()  == "c")   readfile( path, "clike" );
    else if (file_type.toLower()  == "css") readfile( path, "css" );
    else if (file_type.toLower()  == "html") readfile( path, "php" );
    else if (file_type.toLower()  == "php") readfile( path, "php" );
    else if (file_type.toLower() == "py")   readfile( path, "python" );
    else if (file_type.toLower() == "ini")   readfile( path, "ini" );
    else if (file_type.toLower() == "xml")   readfile( path, "html" );
    else if (file_type.toLower() == "java") readfile( path, "java" );
    else if (file_type.toLower() == "cpp") readfile( path, "cpp" );
    else if (file_type.toLower() == "js")   readfile( path, "javascript" );
    else if (file_type.toLower() == "png" or file_type.toLower() == "jpg" or file_type.toLower() == "jpeg" or file_type.toLower() == "bmp" ){
            displayText("<img src='file://"+ path +"'>");
            displayInfo(path);
            ui->fitBtn->setEnabled( true );
    }
    else {
//        QMessageBox::warning(this, tr("Warning"), tr("This extension is not supported"));
        displayText("This extension is not supported");
        ui->listView->clearSelection();
    }





}



void MainWindow::readfile( QString filename, QString type ){

    QFile file(filename);



    if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QString text;
        QTextStream stream(&file);

        displayInfo(filename);
        text.append("<!doctype html>");
        text.append("<html>");
        text.append("<head>");

        QFile cssFile(":/css/prism.css");
        QTextStream cssStream(&cssFile);
        if (cssFile.open(QIODevice::ReadOnly | QIODevice::Text)){
            text.append("<style>");
            while (!cssStream.atEnd()) { text.append( cssStream.readLine() + '\n'); }
            text.append("</style>");
         }
        cssFile.close();



        QFile jsFile(":/js/prism.js");
        QTextStream jsStream(&jsFile);
        if (jsFile.open(QIODevice::ReadOnly | QIODevice::Text)){
            text.append("<script>");
            while (!jsStream.atEnd()) { text.append( jsStream.readLine() + '\n'); }
            text.append("</script>");
         }
        jsFile.close();



        text.append("</head>");
        text.append("<body>");
        text.append("<pre>");
        text.append("<code class=\"language-"+type+"\" >");
        text.append("<xmp id=\"xmp\">");
        while (!stream.atEnd()) { text.append( stream.readLine() + '\n'); }
        text.append("</xmp>");
        text.append("</code>");
        text.append("</pre>");
        text.append("</body>");
        text.append("</html>");
        displayText(text);
    }
    file.close();
}



void MainWindow::on_treeBtn_clicked(bool checked)
{
    checked ? ui->treeView->setVisible( true ) : ui->treeView->setVisible( false );
}

void MainWindow::on_listBtn_clicked(bool checked)
{
    checked ? ui->listView->setVisible( true ) : ui->listView->setVisible( false );
}

void MainWindow::setAllToolTip()
{
    ui->addBtn->setToolTip("Add path to bookmarks");
    ui->deleteBtn->setToolTip("Remove bookmark");
    ui->saveBtn->setToolTip("Save bookmarks");
    ui->fitBtn->setToolTip("Fit image to window width");
    ui->openBtn->setToolTip("Open file in parent directory");
    ui->trayChckBx->setToolTip("Minimize to tray");
    ui->treeBtn->setToolTip("Show/hide tree view");
    ui->listView->setToolTip("Show/hide list view");
    ui->lineEdit->setToolTip("Filter data");


}



void MainWindow::closeEvent(QCloseEvent * event)
{
    if(this->isVisible() && ui->trayChckBx->isChecked()){
        event->ignore();
        this->hide();
        QSystemTrayIcon::MessageIcon icon = QSystemTrayIcon::MessageIcon(QSystemTrayIcon::Information);

        trayIcon->showMessage("Description",
                              trUtf8("Application running in background"),
                              icon,
                              2000);
    }
}

void MainWindow::iconActivated(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason){
    case QSystemTrayIcon::Trigger:
        if(ui->trayChckBx->isChecked()){
            if(!this->isVisible()){
                this->show();
            } else {
                this->hide();
            }
        }
        break;
    default:
        break;
    }
}


void MainWindow::on_fitBtn_clicked()
{
    ui->zoomSlider->setValue(100);
    ui->zoomLbl->setText("Auto");
    displayText( "<img style=\"width: 100%\" src='file://"+ path +"'>" );
    areFitting = true;
}






void MainWindow::on_openBtn_clicked()
{
    if ( !path.isNull() ) QDesktopServices::openUrl(QUrl::fromLocalFile( path )) ;
}








void MainWindow::displayText(QString text)
{

    ui->webEngineView->page()->setHtml(text);
}

void MainWindow::displayInfo(QString path)
{
    path = QFileInfo(path).absolutePath(); // only path without file name
    ui->comboBox->setCurrentText(path);
}

void MainWindow::on_comboBox_activated(const QString &arg1)
{
//    ui->listView->setRootIndex( filemodel->setRootPath(arg1) );

    ui->listView->setRootIndex(filemodel->index(arg1));
    ui->treeView->setRootIndex(dirmodel->index(arg1));



}

void MainWindow::on_listView_doubleClicked(const QModelIndex &index)
{
    if ( !path.isNull() ) QDesktopServices::openUrl(QUrl::fromLocalFile( path )) ;
}



void MainWindow::on_zoomSlider_valueChanged(int value)
{
    qreal zoom = value/100.0;
    ui->zoomLbl->setText(QString::number(value)+"%");
    ui->webEngineView->setZoomFactor(zoom);
    if (areFitting){
        on_listView_clicked(ui->listView->currentIndex());
        areFitting = false;
    }
}

void MainWindow::on_addBtn_clicked()
{
    if(!ui->comboBox->currentText().isEmpty()) ui->comboBox->addItem(ui->comboBox->currentText()+'/');
}

void MainWindow::on_deleteBtn_clicked()
{
    if(ui->comboBox->currentIndex() > -1) ui->comboBox->removeItem(ui->comboBox->currentIndex());
}

void MainWindow::on_saveBtn_clicked()
{
    QFile bookmarksFile(appFilePath + "/bookmarks.conf");
        QTextStream bookmarksStream(&bookmarksFile);
        if (bookmarksFile.open(QIODevice::WriteOnly | QIODevice::Text)){
            int i = 0;
            while ( i < ui->comboBox->count() ){
            bookmarksStream << ui->comboBox->itemText(i++) << endl;
            }

         }
        bookmarksFile.close();

}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{

    // Set the filter
    QStringList filter;

    (ui->lineEdit->text().isEmpty()) ? filter <<  "*" : filter <<  "?" + ui->lineEdit->text() + "? *";


    filemodel->setNameFilters(filter);


    // Did not pass the filter file disable or hidden, true disable false
    filemodel->setNameFilterDisables(false);
// not working because we set root index in "combobox" !!!!!

//    ui->listView->setModel(filemodel);

    ui->listView->setRootIndex(filemodel->setRootPath(ui->comboBox->currentText()));



}



