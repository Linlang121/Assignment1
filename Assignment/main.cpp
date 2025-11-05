#include "GamesEngineeringBase.h"
#include "tilesset.h"
#include "world.h"
#include <filesystem>
#include <fstream>
#include <iostream>
using namespace std;
using namespace GamesEngineeringBase;

// ...
#include <Windows.h>


void main() {
    char buffer[MAX_PATH];
    GetCurrentDirectoryA(MAX_PATH, buffer);
    std::cout << "Current Working Directory: " << buffer << std::endl;

    Window canvas;
    canvas.create(500, 500, "MYGAME");
    World world(canvas);
}

