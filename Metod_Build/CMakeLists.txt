cmake_minimum_required(VERSION 3.16)
project(BJ1_0)

set(CMAKE_CXX_STANDARD 20)

add_executable(BJ1_0 main.cpp Card.cpp Card.h Hand.cpp Hand.h GenericPlayer.cpp GenericPlayer.h Player.cpp Player.h House.cpp House.h Deck.cpp Deck.h BlackJack.cpp BlackJack.h)