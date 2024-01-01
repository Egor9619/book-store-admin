#pragma once
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <iostream>
#include "Book.h"

// Функция соединения с сервером
int connect_to_server(SOCKET& _sock);

// Функция отключения от сервера
void disconnect(SOCKET& _sock);

// Функция заполнения информаии о книге
Book fill_book_info();
