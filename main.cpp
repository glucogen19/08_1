#include <QtWidgets>
class MainWindow : public QMainWindow {
	public:
		MainWindow();	
    private:
};

MainWindow :: MainWindow(){
    setFixedSize(600,200);
    setWindowTitle("Test QPushButton v8_1");
}

int main(int argc, char *argv[]){
	QApplication app(argc, argv);
	MainWindow mainWin;
	mainWin.show();
	return app.exec();
	
}
