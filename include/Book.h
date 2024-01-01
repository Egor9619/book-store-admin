#include <string>

/* Класс книга содержит данные о книге :
	1. Название книги
	2. Имя автора книги
	3. Жанр книги
	4. Количество книг на складе
	5. Цена книги за 1 шт.
*/
class Book {
public:
	// Метод установки названия книги
	void setBookTitle(const std::string& _bookTitle);
	// Метод возвращающий название книги
	std::string getBookTitle();

	// Метод установки имени автора книги
	void setBookAutor(const std::string& _bookAutor);
	// Метод возвращающий имя автора книги
	std::string getBookAutor();

	// Метод установки жанра книги 
	void setBookGenre(const std::string& _bookGenre);
	// Метод возвращающий жанр книги
	std::string getBookGenre();

	// Метод устанавливающий количество книг
	void setBookQuantity(const int& _bookQuantity);
	// Метод возвращающий количество книг 
	int getBookQuantity();

	// Метод устанавливающий цену книги
	void setBookPrice(const float& _bookPrice);
	// Метод возвращающий цену книги
	float getBookPrice();



private:
	std::string bookTitle;
	std::string bookAutor;
	std::string bookGenre;
	int bookQuantity;
	float bookPrice;
};