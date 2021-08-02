cmake_minimum_required(VERSION 3.16)
project(BlackJack)

set(CMAKE_CXX_STANDARD 20)

add_executable(BlackJack main.cpp Card.h Card.cpp GenericPlayer.h GenericPlayer.cpp Hand.h Hand.cpp Player.cpp Player.h House.cpp House.h)