#include "utilites.h"


int connect_to_server(SOCKET& _sock) {
    // Инициализация библиотеки Winsock
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        // Обработка ошибки инициализации
        return 1;
    }

    // Создание сокета
    SOCKET _sock = socket(AF_INET, SOCK_STREAM, 0);
    if (_sock == INVALID_SOCKET) {
        // Обработка ошибки создания сокета
        WSACleanup();
        return 1;
    }

    // Установка параметров сервера
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(8080);
    inet_pton(AF_INET, "127.0.0.1", &(serverAddress.sin_addr));

    // Подключение к серверу
    if (connect(_sock, (sockaddr*)&serverAddress, sizeof(serverAddress)) == SOCKET_ERROR) {
        // Обработка ошибки подключения
        closesocket(_sock);
        WSACleanup();
        return 1;
    }
}

void disconnect(SOCKET& _sock) {
    closesocket(_sock);
    WSACleanup();
}

Book fill_book_info() {
    Book book;
    std::string bookString;
    int bookQuantity;
    float bookPrice;

    // Заполнение названия книги
    while (true) {
        std::cout << "Введите название книги(Введите 0 чтобы выйти: ";
        std::getline(std::cin, bookString);
        system("cls");
        if (bookString.empty()) {
            std::cout << "Название книги не может быть пустой строкой. Повторите ввод." << std::endl;
            continue;
        }
        else if (bookString == "0") {
            throw "Операция отменена";
        }
        else {
            book.setBookTitle(bookString);
            break;
        }
    }

    // Заполнение имени автора книги
    while (true) {
        std::cout << "Введите имя автора книги(Введите 0 чтобы выйти): ";
        std::getline(std::cin, bookString);
        system("cls");
        if (bookString.empty()) {
            std::cout << "Название книги не может быть пустой строкой. Повторите ввод" << std::endl;
            continue;
        }
        else if (bookString == "0") {
            throw "Операция отменена";
        }
        else {
            book.setBookAutor(bookString);
            break;
        }
    }

    // Заполнение жанра книги
    while (true) {
        std::cout << "Введите жанр книги(Введите 0 чтобы выйти: ";
        std::getline(std::cin, bookString);
        system("cls");
        if (bookString.empty()) {
            std::cout << "Жанр книги не может быть пустой строкой. Повторите ввод" << std::endl;
            continue;
        }
        else if (bookString == "0") {
            throw "Операция отменена";
        }
        else {
            book.setBookGenre(bookString);
            break;
        }
    }

    // Заполнение количества книг
    while (true) {
        std::cout << "Введите количество книг. Введите 0 чтобы выйти: ";
        std::cin >> bookQuantity;
        system("cls");
        if (bookPrice < 0) {
            std::cout << "Количество книг не может быть отрицательным. Повторите ввод" << std::endl;
            continue;
        }
        else if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Некорректный ввод. Попробуйте ещё раз" << std::endl;
            continue;
        }
        else if (bookQuantity == 0) {
            throw "Операция отменена";
        }
        else {
            book.setBookQuantity(bookQuantity);
            break;
        }
    }

    // Заполнение цены книги
    while (true) {
        std::cout << "Введите цену книги(Введите 0 чтобы выйти): ";
        std::cin >> bookPrice;
        system("cls");
        if (bookPrice < 0) {
            std::cout << "Цена книги не может быть отрициаельной. Повторите ввод" << std::endl;
            continue;
        }
        else if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Некорректный ввод. Попробуйте ещё раз" << std::endl;
        }
        else if (bookPrice == 0) {
            throw "Операция отменена";
        }
        else {
            book.setBookPrice(bookPrice);
            break;
        }
    }
    return book;
}