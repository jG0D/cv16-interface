/********************************************************************************
** Form generated from reading UI file 'imagewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEWIDGET_H
#define UI_IMAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *imageLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *imageCaption;
    QLabel *numTargetDisplay;
    QLabel *colourLabel;

    void setupUi(QWidget *ImageWidget)
    {
        if (ImageWidget->objectName().isEmpty())
            ImageWidget->setObjectName(QStringLiteral("ImageWidget"));
        ImageWidget->resize(292, 204);
        verticalLayout_2 = new QVBoxLayout(ImageWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        imageLabel = new QLabel(ImageWidget);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy);
        imageLabel->setMinimumSize(QSize(0, 0));
        imageLabel->setScaledContents(false);
        imageLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(imageLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        imageCaption = new QLabel(ImageWidget);
        imageCaption->setObjectName(QStringLiteral("imageCaption"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imageCaption->sizePolicy().hasHeightForWidth());
        imageCaption->setSizePolicy(sizePolicy1);
        imageCaption->setMaximumSize(QSize(16777215, 23));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        imageCaption->setFont(font);
        imageCaption->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(imageCaption);

        numTargetDisplay = new QLabel(ImageWidget);
        numTargetDisplay->setObjectName(QStringLiteral("numTargetDisplay"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(numTargetDisplay->sizePolicy().hasHeightForWidth());
        numTargetDisplay->setSizePolicy(sizePolicy2);
        numTargetDisplay->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(numTargetDisplay);

        colourLabel = new QLabel(ImageWidget);
        colourLabel->setObjectName(QStringLiteral("colourLabel"));
        sizePolicy2.setHeightForWidth(colourLabel->sizePolicy().hasHeightForWidth());
        colourLabel->setSizePolicy(sizePolicy2);
        colourLabel->setMinimumSize(QSize(17, 0));
        colourLabel->setAutoFillBackground(true);

        horizontalLayout->addWidget(colourLabel);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ImageWidget);

        QMetaObject::connectSlotsByName(ImageWidget);
    } // setupUi

    void retranslateUi(QWidget *ImageWidget)
    {
        ImageWidget->setWindowTitle(QApplication::translate("ImageWidget", "Form", 0));
        imageLabel->setText(QString());
        imageCaption->setText(QApplication::translate("ImageWidget", "Image Name", 0));
        numTargetDisplay->setText(QApplication::translate("ImageWidget", "0 Targets", 0));
        colourLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ImageWidget: public Ui_ImageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEWIDGET_H
