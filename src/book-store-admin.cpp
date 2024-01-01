// book-store-admin.cpp: определяет точку входа для приложения.
//

#include "book-store-admin.h"
#include "utilites.h"


using namespace std;

int main()
{
	SOCKET socket;

	// Подключение к серверу
	connect_to_server(socket);

	int command = 0;

	std::cout << "Выберите действие" << std::endl;
	std::cout << "1. Добавить книгу" << std::endl;
	std::cout << "2. Найти книгу" << std::endl;
	std::cout << "3. Просмотреть заказы" << std::endl;



	return 0;
}
