#include <QtWidgets>
class MainWindow : public QMainWindow {
	public:
		MainWindow();	
	private:
};

MainWindow :: MainWindow(){

}

int main(int argc, char *argv[]){
	QApplication app(argc, argv);
	MainWindow mainWin;
	mainWin.show();
	return app.exec();
	
}
