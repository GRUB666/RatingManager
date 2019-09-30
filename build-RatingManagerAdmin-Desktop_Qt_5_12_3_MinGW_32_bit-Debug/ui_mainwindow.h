/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_4;
    QComboBox *sort_box;
    QListWidget *classList;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_5;
    QListWidget *eventsList;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *summ_rating;
    QFrame *line_2;
    QLabel *educate_rating;
    QLabel *other_rating;
    QLabel *discipline_rating;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *winners_count;
    QLabel *competitors_count;
    QLabel *festives_winners;
    QLabel *festives_competitors;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *theater_count;
    QLabel *museum_trips;
    QLabel *wins_competitions;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *form_count;
    QLabel *misses_points;
    QLabel *reports_count;
    QPushButton *pushButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1159, 699);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        QPalette palette1;
        QBrush brush1(QColor(193, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        QBrush brush2(QColor(255, 255, 255, 127));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        groupBox_7->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox_7->setFont(font1);
        groupBox_7->setAlignment(Qt::AlignCenter);
        groupBox_7->setFlat(false);
        verticalLayout_4 = new QVBoxLayout(groupBox_7);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        sort_box = new QComboBox(groupBox_7);
        sort_box->addItem(QString());
        sort_box->addItem(QString());
        sort_box->setObjectName(QString::fromUtf8("sort_box"));

        verticalLayout_4->addWidget(sort_box);

        classList = new QListWidget(groupBox_7);
        classList->setObjectName(QString::fromUtf8("classList"));
        classList->setMinimumSize(QSize(0, 0));
        QPalette palette2;
        QBrush brush3(QColor(0, 2, 84, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        QBrush brush4(QColor(0, 3, 98, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush5(QColor(181, 163, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        QBrush brush6(QColor(206, 206, 206, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        QBrush brush7(QColor(231, 231, 231, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        classList->setPalette(palette2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        classList->setFont(font2);
        classList->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        classList->setFrameShape(QFrame::StyledPanel);
        classList->setFrameShadow(QFrame::Sunken);
        classList->setResizeMode(QListView::Fixed);

        verticalLayout_4->addWidget(classList);


        verticalLayout_9->addWidget(groupBox_7);

        groupBox_8 = new QGroupBox(centralWidget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        groupBox_8->setPalette(palette3);
        groupBox_8->setFont(font1);
        groupBox_8->setAlignment(Qt::AlignCenter);
        groupBox_8->setFlat(false);
        verticalLayout_5 = new QVBoxLayout(groupBox_8);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        eventsList = new QListWidget(groupBox_8);
        eventsList->setObjectName(QString::fromUtf8("eventsList"));
        eventsList->setMinimumSize(QSize(700, 0));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        eventsList->setPalette(palette4);
        eventsList->setFont(font2);
        eventsList->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        eventsList->setFrameShape(QFrame::StyledPanel);
        eventsList->setFrameShadow(QFrame::Sunken);
        eventsList->setResizeMode(QListView::Fixed);

        verticalLayout_5->addWidget(eventsList);

        pushButton_2 = new QPushButton(groupBox_8);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 25));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_2->setPalette(palette5);
        pushButton_2->setFont(font);

        verticalLayout_5->addWidget(pushButton_2);


        verticalLayout_9->addWidget(groupBox_8);


        horizontalLayout->addLayout(verticalLayout_9);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        groupBox_2->setPalette(palette6);
        groupBox_2->setFont(font1);
        groupBox_2->setAlignment(Qt::AlignCenter);
        groupBox_2->setFlat(false);
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(groupBox_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 419, 571));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush8(QColor(0, 255, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush8);
        QBrush brush9(QColor(231, 231, 231, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush9);
        QBrush brush10(QColor(242, 218, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        QBrush brush11(QColor(0, 170, 0, 102));
        brush11.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        groupBox_3->setPalette(palette7);
        groupBox_3->setAlignment(Qt::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        summ_rating = new QLabel(groupBox_3);
        summ_rating->setObjectName(QString::fromUtf8("summ_rating"));
        QPalette palette8;
        QBrush brush12(QColor(0, 3, 150, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        summ_rating->setPalette(palette8);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        summ_rating->setFont(font3);

        verticalLayout_2->addWidget(summ_rating);

        line_2 = new QFrame(groupBox_3);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        educate_rating = new QLabel(groupBox_3);
        educate_rating->setObjectName(QString::fromUtf8("educate_rating"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        educate_rating->setPalette(palette9);
        educate_rating->setFont(font3);

        verticalLayout_2->addWidget(educate_rating);

        other_rating = new QLabel(groupBox_3);
        other_rating->setObjectName(QString::fromUtf8("other_rating"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        other_rating->setPalette(palette10);
        other_rating->setFont(font3);

        verticalLayout_2->addWidget(other_rating);

        discipline_rating = new QLabel(groupBox_3);
        discipline_rating->setObjectName(QString::fromUtf8("discipline_rating"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        discipline_rating->setPalette(palette11);
        discipline_rating->setFont(font3);

        verticalLayout_2->addWidget(discipline_rating);


        verticalLayout_8->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush8);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        groupBox_4->setPalette(palette12);
        groupBox_4->setAlignment(Qt::AlignCenter);
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        winners_count = new QLabel(groupBox_4);
        winners_count->setObjectName(QString::fromUtf8("winners_count"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        winners_count->setPalette(palette13);
        winners_count->setFont(font3);

        verticalLayout_3->addWidget(winners_count);

        competitors_count = new QLabel(groupBox_4);
        competitors_count->setObjectName(QString::fromUtf8("competitors_count"));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        competitors_count->setPalette(palette14);
        competitors_count->setFont(font3);

        verticalLayout_3->addWidget(competitors_count);

        festives_winners = new QLabel(groupBox_4);
        festives_winners->setObjectName(QString::fromUtf8("festives_winners"));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        festives_winners->setPalette(palette15);
        festives_winners->setFont(font3);

        verticalLayout_3->addWidget(festives_winners);

        festives_competitors = new QLabel(groupBox_4);
        festives_competitors->setObjectName(QString::fromUtf8("festives_competitors"));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        festives_competitors->setPalette(palette16);
        festives_competitors->setFont(font3);

        verticalLayout_3->addWidget(festives_competitors);


        verticalLayout_8->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Dark, brush8);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        groupBox_5->setPalette(palette17);
        groupBox_5->setAlignment(Qt::AlignCenter);
        verticalLayout_6 = new QVBoxLayout(groupBox_5);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        theater_count = new QLabel(groupBox_5);
        theater_count->setObjectName(QString::fromUtf8("theater_count"));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        theater_count->setPalette(palette18);
        theater_count->setFont(font3);

        verticalLayout_6->addWidget(theater_count);

        museum_trips = new QLabel(groupBox_5);
        museum_trips->setObjectName(QString::fromUtf8("museum_trips"));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        museum_trips->setPalette(palette19);
        museum_trips->setFont(font3);

        verticalLayout_6->addWidget(museum_trips);

        wins_competitions = new QLabel(groupBox_5);
        wins_competitions->setObjectName(QString::fromUtf8("wins_competitions"));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        wins_competitions->setPalette(palette20);
        wins_competitions->setFont(font3);

        verticalLayout_6->addWidget(wins_competitions);


        verticalLayout_8->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette21.setBrush(QPalette::Active, QPalette::Dark, brush8);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette21.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        groupBox_6->setPalette(palette21);
        groupBox_6->setAlignment(Qt::AlignCenter);
        verticalLayout_7 = new QVBoxLayout(groupBox_6);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        form_count = new QLabel(groupBox_6);
        form_count->setObjectName(QString::fromUtf8("form_count"));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        form_count->setPalette(palette22);
        form_count->setFont(font3);

        verticalLayout_7->addWidget(form_count);

        misses_points = new QLabel(groupBox_6);
        misses_points->setObjectName(QString::fromUtf8("misses_points"));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        misses_points->setPalette(palette23);
        misses_points->setFont(font3);

        verticalLayout_7->addWidget(misses_points);

        reports_count = new QLabel(groupBox_6);
        reports_count->setObjectName(QString::fromUtf8("reports_count"));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette24.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        reports_count->setPalette(palette24);
        reports_count->setFont(font3);

        verticalLayout_7->addWidget(reports_count);


        verticalLayout_8->addWidget(groupBox_6);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 25));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton->setPalette(palette25);
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addWidget(groupBox_2);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\234\320\265\320\275\320\265\320\264\320\266\320\265\321\200 \321\200\320\265\320\271\321\202\320\270\320\275\320\263\320\260 \320\264\320\273\321\217 \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260", nullptr));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\272\320\273\320\260\321\201\321\201\320\276\320\262:", nullptr));
        sort_box->setItemText(0, QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\321\213\320\262\320\260\321\202\321\214 \320\262 \320\277\320\276\321\200\321\217\320\264\320\272\320\265 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\217 \321\200\320\265\320\271\321\202\320\270\320\275\320\263\320\260", nullptr));
        sort_box->setItemText(1, QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\321\213\320\262\320\260\321\202\321\214 \320\262 \320\277\320\276\321\200\321\217\320\264\320\272\320\265 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\217 \321\200\320\265\320\271\321\202\320\270\320\275\320\263\320\260", nullptr));

        groupBox_8->setTitle(QApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\271 \321\200\320\265\320\271\321\202\320\270\320\275\320\263\320\260 \320\264\320\273\321\217 11 <<\320\222>>", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\265 \321\201\320\276\320\261\321\213\321\202\320\270\320\265", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260 \320\264\320\273\321\217 n <<c>> \320\272\320\273\320\260\321\201\321\201\320\260", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\236\320\261\321\211\320\265\320\265:", nullptr));
        summ_rating->setText(QApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260\321\200\320\275\321\213\320\271 \321\200\320\265\320\271\321\202\320\270\320\275\320\263 \320\275\320\260 \320\264\320\260\320\275\320\275\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202: 1488", nullptr));
        educate_rating->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\271\321\202\320\270\320\275\320\263 \320\267\320\260 \321\203\321\207\320\265\320\261\320\275\321\203\321\216 \320\264\320\265\321\217\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214:", nullptr));
        other_rating->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\271\321\202\320\270\320\275\320\263 \320\267\320\260 \320\262\320\275\320\265\321\203\321\200\320\276\321\207\320\275\321\203\321\216 \320\264\320\265\321\217\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214:", nullptr));
        discipline_rating->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\271\321\202\320\270\320\275\320\263 \320\267\320\260 \320\264\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\321\203:", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\320\243\321\207\320\265\320\261\320\275\320\260\321\217 \320\264\320\265\321\217\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214:", nullptr));
        winners_count->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\321\200\320\270\320\267\321\221\321\200\320\276\320\262 \320\276\320\273\320\270\320\274\320\277\320\270\320\260\320\264: 4", nullptr));
        competitors_count->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\203\321\207\320\260\321\201\321\202\320\275\320\270\320\272\320\276\320\262 \320\276\320\273\320\270\320\274\320\277\320\270\320\260\320\264: 6", nullptr));
        festives_winners->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\321\200\320\270\320\267\321\221\321\200\320\276\320\262 \320\272\320\276\320\275\320\272\321\203\321\200\321\201\320\276\320\262:", nullptr));
        festives_competitors->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\203\321\207\320\260\321\201\321\202\320\270\320\271 \320\262 \320\272\320\276\320\275\320\272\321\203\321\200\321\201\320\260\321\205:", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\320\222\320\275\320\265\320\272\320\273\320\260\321\201\321\201\320\275\320\260\321\217 \321\200\320\260\320\261\320\276\321\202\320\260:", nullptr));
        theater_count->setText(QApplication::translate("MainWindow", "\320\243\321\207\320\260\321\201\321\202\320\270\321\217 \320\262 \320\277\320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260\321\205 \320\270 \320\277\321\200\320\260\320\267\320\264\320\275\320\270\320\272\320\260\321\205: 7", nullptr));
        museum_trips->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\205\320\276\320\264\321\213 \320\262 \320\274\321\203\320\267\320\265\320\270 \320\270 \321\202\320\265\320\260\321\202\321\200\321\213:", nullptr));
        wins_competitions->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\261\320\265\320\264 \320\262 \321\210\320\272\320\276\320\273\321\214\320\275\321\213\321\205 \320\274\320\265\321\200\320\276\320\277\321\200\320\270\321\217\321\202\320\270\321\217\321\205:", nullptr));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\320\224\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\320\260:", nullptr));
        form_count->setText(QApplication::translate("MainWindow", "\320\241\321\200\320\265\320\275\320\264\320\265\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\203\321\207\320\265\320\275\320\270\320\272\320\276\320\262 \320\262 \321\204\320\276\321\200\320\274\320\265:", nullptr));
        misses_points->setText(QApplication::translate("MainWindow", "\320\221\320\260\320\273\320\273\321\213 \320\267\320\260 \320\276\321\202\321\201\321\203\321\202\321\201\321\202\320\262\320\270\320\265 \320\277\321\200\320\276\320\277\321\203\321\201\320\272\320\276\320\262:", nullptr));
        reports_count->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\271 \320\276 \321\210\320\272\320\276\320\273\320\265:", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\320\276\320\261\321\213\321\202\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
