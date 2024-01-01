cmake_minimum_required(VERSION 3.8)

project(${PROJECT_NAME})

set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

find_package(nlohmann_json CONFIG REQUIRED)

add_executable(${PROJECT_NAME}
"book-store-admin.cpp"
"Book.cpp"
"utilites.cpp"

${INCLUDE_DIR}/book-store-admin.h
${INCLUDE_DIR}/Book.h
${INCLUDE_DIR}/utilites.h
)

target_link_libraries(${PROJECT_NAME} PRIVATE nlohmann_json::nlohmann_json)

target_include_directories(${PROJECT_NAME} PRIVATE ${INCLUDE_DIR})