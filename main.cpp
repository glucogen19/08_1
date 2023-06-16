#include <QtWidgets>
class MainWindow : public QMainWindow {
	public:
		MainWindow();	
    private:
        QLabel      *textLabel;
        QPushButton *startButton;
        QPushButton *stopButton;
        QPushButton *pauseButton;
};

MainWindow :: MainWindow(){
    setFixedSize(600,200);
    setWindowTitle("Test QPushButton v8_1");
    QFont fontLabel("Courier", 18, QFont::Normal);
    QFont fontButton("Times", 18, QFont::Bold);

    textLabel = new QLabel("Test QLabel", this);
    textLabel->setGeometry(0, 0, 300, 50);
    textLabel->setFont(fontLabel);
}

int main(int argc, char *argv[]){
	QApplication app(argc, argv);
	MainWindow mainWin;
	mainWin.show();
	return app.exec();
	
}
