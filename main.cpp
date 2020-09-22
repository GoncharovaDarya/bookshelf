#include <iostream>
#include "Book.h"
#include "PrintBook.h"
#include "Shelf.h"
#include "BShelf.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv){
 
	system ("chcp 1251");
	
	int mode = -1;
	vector<BookShelf> bshelfs;
	BookShelf bshelf;
	while(mode!=0){
		cout<<"-=МЕНЮ =-"<<endl;
		cout<<"1.Добавить шкаф."<<endl;
		cout<<"2.Добавить полку в шкаф."<<endl;
		cout<<"3.Добавить книгу."<<endl;
		cout<<"4.Вывод на экран."<<endl;
		cout<<"0. Выход."<<endl;
		cout<<"Введите номер и нажмите <ENTER>";
		cin>>mode;
		switch(mode){
			case 0: continue;
			case 1:
				
				bshelfs.push_back(bshelf);
				cout<<"Шкаф добавлен!"<<endl<<endl;
				break;
			case 2:
				if(bshelfs.size()>0){
					cout<<"Доступно "<<bshelfs.size()<<" шкафов"<<endl;
					cout<<"Введите номер шкафа ( от 1 до "<<bshelfs.size()<<"): ";
					int n = 0;
					cin>>n;
					if(n>0 && n<=bshelfs.size()){
						bshelfs[n-1].addShelf();
						cout<<"Полка добавлена."<<endl<<endl;
					}else{
						cout<<"Доступные шкафы отсутствуют!"<<endl<<endl;
						
					}
				}else{
						cout<<"Доступные шкафы отсутствуют!"<<endl<<endl;
					
				}
				break;
		}
	}
	cout<<"Пока!";
	return 0;
}

