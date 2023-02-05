#pragma once
#include"settings.h"
#include <iostream>
#include <ctime>

const float WINDOW_WIDTH = 600;
const float WINDOW_HEIGHT = 1000;
int FPS = 60;

const sf::Vector2f GRASS_START_POS{ 0.f, 0.f };
const std::string GRASS_FILE_NAME{"grass.jpg"};
const sf::Vector2f ROAD_START_POS{ 100.f, 0.f };
const std::string ROAD_FILE_NAME{ "road.png" };