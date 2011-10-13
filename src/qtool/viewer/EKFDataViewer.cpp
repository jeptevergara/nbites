#include "EKFDataViewer.h"
#include <vector>
#include "man/memory/Memory.h"

namespace qtool {
namespace viewer {

using namespace data;
using namespace man::memory;

EKFDataViewer::EKFDataViewer(QWidget *parent) :
           QWidget(parent){

     model= new QStandardItemModel(5,7, this);

     xPosLabel = new QLabel(tr("X:"));
     xEdit = new QLineEdit();
     xPosLabel->setBuddy(xEdit);

     yPosLabel = new QLabel(tr("Y:"));
     yEdit = new QLineEdit();
     yPosLabel->setBuddy(yEdit);

     xVelLabel = new QLabel(tr("X Velocity:"));
     xVelEdit = new QLineEdit();
     xVelLabel->setBuddy(xVelEdit);

     yVelLabel = new QLabel(tr("Y Velocity:"));
     yVelEdit = new QLineEdit();
     yVelLabel->setBuddy(yVelEdit);

     xAccLabel = new QLabel(tr("X Acceleration:"));
     xAccEdit = new QLineEdit();
     xAccLabel->setBuddy(xAccEdit);

     yAccLabel = new QLabel(tr("Y Acceleration:"));
     yAccEdit = new QLineEdit();
     yAccLabel->setBuddy(yAccEdit);

     testEKFButton = new QPushButton(tr("Test"));


     mapper = new QDataWidgetMapper(this);
     mapper->setModel(model);
     mapper->addMapping(xEdit, 0);
     mapper->addMapping(yEdit, 1);
     mapper->addMapping(xVelEdit, 2);
     mapper->addMapping(yVelEdit, 3);
     mapper->addMapping(xAccEdit, 4);
     mapper->addMapping(yAccEdit, 5);

     //connect(testEKFButton, SIGNAL(clicked()),
     //mapper, SLOT(runEKF()));

     QGridLayout *layout = new QGridLayout();
     layout->addWidget(xPosLabel, 0, 0, 1, 1);
     layout->addWidget(xEdit   , 0, 1, 1, 1);
     layout->addWidget(yPosLabel,0,0,2, 1);
     layout->addWidget(yEdit, 0,1, 2, 1);
     layout->addWidget(xVelLabel, 0, 0, 3, 1);
     layout->addWidget(xVelEdit , 0, 1, 3, 1);
     layout->addWidget(yVelLabel, 0, 0, 4, 1);
     layout->addWidget(yVelEdit, 0, 1, 4, 1);
     layout->addWidget(xAccLabel, 0, 0 ,5, 1);
     layout->addWidget(xAccEdit , 0, 1, 5, 1);
     layout->addWidget(yAccLabel, 0, 0, 6, 1);
     layout->addWidget(yAccEdit, 0, 1, 6, 1);

     setLayout(layout);

     mapper->toFirst();

}

   void EKFDataViewer::runEKF()
  {
    // code to create new EKF and test
  } 

}
}
