#include<QApplication>
#include<QLabel>
int main(int argc,char* argv[]){
    QApplication app(argc,argv);
    QLabel *label = new QLabel("First QT App");
    label->setWindowTitle("My App");
    label->resize(400,400);
    label->show();
    return app.exec();
}
