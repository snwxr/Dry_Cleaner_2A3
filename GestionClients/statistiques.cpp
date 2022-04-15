#include "statistiques.h"
#include "ui_statistiques.h"

statistiques::statistiques(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statistiques)
{
    ui->setupUi(this);
}

statistiques::~statistiques()
{
    delete ui;
}
void statistiques::start_stat()
{
    QSqlQuery q1,q2,q3,q4;
    qreal tot=0, c1=0,c2=0;//c3=0;
    q1.prepare("SELECT * FROM clients");
    q1.exec();
    q2.prepare("SELECT * FROM clients WHERE sexe_c='Woman'");
    q2.exec();
    q3.prepare("SELECT * FROM clients WHERE sexe_c='Man'");
    q3.exec();


    while (q1.next()){tot++;}
    while (q2.next()){c1++;}
    while (q3.next()){c2++;}



    c1=c1/tot;
    c2=c2/tot;

    // Assign names to the set of bars used
            QBarSet *set0 = new QBarSet("Femme");
            QBarSet *set1 = new QBarSet("Homme");
            //QBarSet *set2 = new QBarSet("Homme");


            // Assign values for each bar
            *set0 << c1;
            *set1 << c2;

            // Add all sets of data to the chart as a whole
            // 1. Bar Chart
            QBarSeries *series = new QBarSeries();
            //QHorizontalStackedBarSeries *series = new QHorizontalStackedBarSeries();
            // 2. Stacked bar chart
            series->append(set0);
            series->append(set1);
           // series->append(set2);
            // Used to define the bar chart to display, title
            // legend,
            QChart *chart = new QChart();
            // Add the chart
            chart->addSeries(series);
            //add title
            chart->setTitle("Mieux Connaitre Vos Clients");
            //Animation
            chart->setAnimationOptions(QChart::AllAnimations);
            // Adds categories to the axes
            QBarCategoryAxis *axis = new QBarCategoryAxis();
            // 1. Bar chart
            chart->setAxisX(axis, series);

            // Used to change the palette
            QPalette pal = qApp->palette();
            // Change the color around the chart widget and text
            pal.setColor(QPalette::Window, QRgb(0xd2d0d1));
            pal.setColor(QPalette::WindowText, QRgb(0x404044));
            // Apply palette changes to the application
            qApp->setPalette(pal);

                    //DESIGN
            QPen pen(QRgb(0xfdb157));
            pen.setWidth(5);
            //series->setPen(pen);

            // Customize chart title
            QFont font;
            font.setPixelSize(18);
            chart->setTitleFont(font);
            chart->setTitleBrush(QBrush(Qt::white));
            //chart->setTitle("Customchart example");

            // Customize chart background
            QLinearGradient backgroundGradient;
            backgroundGradient.setStart(QPointF(0, 0));
            backgroundGradient.setFinalStop(QPointF(0, 1));
            backgroundGradient.setColorAt(0.0, QRgb(0xd2d0d1));
            backgroundGradient.setColorAt(1.0, QRgb(0x4c4547));
            backgroundGradient.setCoordinateMode(QGradient::ObjectBoundingMode);
            chart->setBackgroundBrush(backgroundGradient);

            // Customize plot area background
            QLinearGradient plotAreaGradient;
            plotAreaGradient.setStart(QPointF(0, 1));
            plotAreaGradient.setFinalStop(QPointF(1, 0));
            plotAreaGradient.setColorAt(0.0, QRgb(0x555555));
            plotAreaGradient.setColorAt(1.0, QRgb(0x55aa55));
            plotAreaGradient.setCoordinateMode(QGradient::ObjectBoundingMode);
            chart->setPlotAreaBackgroundBrush(plotAreaGradient);
            chart->setPlotAreaBackgroundVisible(true);

    // Used to display the chart
    chartView = new QChartView(chart,ui->stats);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setMinimumSize(600,500);

    chartView->show();
}
void statistiques::start_statNB()
{
    QSqlQuery q2,q3,q4,q5;
    qreal c1=0,c2=0,c3=0,c4=0;

    q2.prepare("SELECT * FROM clients WHERE (EXTRACT(year FROM DATE_AJOUT)=2019)");
    q2.exec();
    q3.prepare("SELECT * FROM clients WHERE (EXTRACT(year FROM DATE_AJOUT)=2020)");
    q3.exec();
    q4.prepare("SELECT * FROM clients WHERE (EXTRACT(year FROM DATE_AJOUT)=2021)");
    q4.exec();
    q5.prepare("SELECT * FROM clients WHERE (EXTRACT(year FROM DATE_AJOUT)=2022)");
    q5.exec();

    while (q2.next()){c1++;}
    while (q3.next()){c2++;}
    while (q4.next()){c3++;}
    while (q5.next()){c4++;}


            // creating a simple line series
            QLineSeries *series = new QLineSeries();

            // 2. Stacked bar chart
            series->append(0, c1);
            series->append(15, c2);
            series->append(25, c3);
            series->append(39, c4);
            //creating a chart object
            QChart *chart = new QChart();
            chart->legend()->hide();
            // Add series the chart
            chart->addSeries(series);
            //axes
            chart->createDefaultAxes();
            //Animation
            chart->setAnimationOptions(QChart::AllAnimations);
            // Customize chart title
                QFont font;
                font.setPixelSize(18);
                chart->setTitleFont(font);
                chart->setTitleBrush(QBrush(Qt::white));
                chart->setTitle("Votre Progrés a travers les années");

            // Customize series
            QPen pen(QRgb(0xfdb157));
            pen.setWidth(5);
            series->setPen(pen);
            // Customize chart background
            QLinearGradient backgroundGradient;
            backgroundGradient.setStart(QPointF(0, 0));
            backgroundGradient.setFinalStop(QPointF(0, 1));
            backgroundGradient.setColorAt(0.0, QRgb(0xd2d0d1));
            backgroundGradient.setColorAt(1.0, QRgb(0x4c4547));
            backgroundGradient.setCoordinateMode(QGradient::ObjectBoundingMode);
            chart->setBackgroundBrush(backgroundGradient);

            // Customize plot area background
            QLinearGradient plotAreaGradient;
            plotAreaGradient.setStart(QPointF(0, 1));
            plotAreaGradient.setFinalStop(QPointF(1, 0));
            plotAreaGradient.setColorAt(0.0, QRgb(0x555555));
            plotAreaGradient.setColorAt(1.0, QRgb(0x55aa55));
            plotAreaGradient.setCoordinateMode(QGradient::ObjectBoundingMode);
            chart->setPlotAreaBackgroundBrush(plotAreaGradient);
            chart->setPlotAreaBackgroundVisible(true);

            //Customize Axes
            QCategoryAxis *axisX = new QCategoryAxis();
            QCategoryAxis *axisY = new QCategoryAxis();
            // Customize axis label font
            QFont labelsFont;
            labelsFont.setPixelSize(12);
            axisX->setLabelsFont(labelsFont);
            axisY->setLabelsFont(labelsFont);
            // Customize axis colors
            QPen axisPen(QRgb(0xd18952));
            axisPen.setWidth(2);
            axisX->setLinePen(axisPen);
            axisY->setLinePen(axisPen);
            // Customize axis label colors
             QBrush axisBrush(Qt::white);
             axisX->setLabelsBrush(axisBrush);
             axisY->setLabelsBrush(axisBrush);
             // Customize grid lines and shades
                axisX->setGridLineVisible(false);
                axisY->setGridLineVisible(false);
                axisY->setShadesPen(Qt::NoPen);
                axisY->setShadesBrush(QBrush(QColor(0x99, 0xcc, 0xcc, 0x55)));
                axisY->setShadesVisible(true);

            axisX->append("2019",10);
            axisX->append("2020",20);
            axisX->append("2021",30);
            axisX->append("2022",40);
            axisX->setRange(0,40);

            axisY->append("low", 10);
            axisY->append("optimal", 20);
            axisY->append("high", 30);
            axisY->setRange(0, 30);
            //Once the axes are ready, we set them to be used by the chart
            chart->addAxis(axisX, Qt::AlignBottom);
            chart->addAxis(axisY, Qt::AlignLeft);
            series->attachAxis(axisX);
            series->attachAxis(axisY);
            chart->legend()->hide();




    // Used to display the chart
    chartView = new QChartView(chart,ui->stats);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setMinimumSize(500,400);
    chartView->show();
}
