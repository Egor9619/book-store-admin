#include "Book.h"

void Book::setBookTitle(const std::string& _bookTitle) {
	bookTitle = std::move(_bookTitle);
}

std::string Book::getBookTitle() { return bookTitle; }

void Book::setBookAutor(const std::string& _bookAutor) {
	bookGenre = std::move(_bookAutor);
}

std::string Book::getBookAutor() { return bookAutor; }

void Book::setBookGenre(const std::string& _bookGenre) {
	bookGenre = std::move(_bookGenre);
}

std::string Book::getBookGenre() { return bookGenre; }

void Book::setBookQuantity(const int& _bookQuantity) {
	bookQuantity = std::move(_bookQuantity);
}

int Book::getBookQuantity() { return bookQuantity; }

void Book::setBookPrice(const float& _bookPrice) {
	bookPrice = std::move(_bookPrice);
}

float Book::getBookPrice() { return bookPrice; }