#include "Budget.hpp"

#include <string>

using namespace std;

class App
{
private:
    Budget* budget;

    string GetUserInput(const string& prompt) const;
    int ConvertUserInputToInt(const string& input) const;
    const bool DisplayMenu() const;

public:
    App();
    ~App();

    void Init();
    const bool Run();
};