#include "App.hpp"

using namespace std;

int main()
{
    // Initialize
    App app;
    app.Init();
    
    // Program loop
    bool exit = false;
    while (!exit) exit = app.Run();

    return 0;
}