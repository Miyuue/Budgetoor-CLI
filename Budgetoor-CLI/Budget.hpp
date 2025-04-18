#include <string>
#include <vector>

using namespace std;

struct BudgetItem
{
	string name;
	int maxLimit;
	bool isFlexible;

	BudgetItem(string name, int maxLimit, bool isFlexible = false) 
	{
		this->name = name;
		this->maxLimit = maxLimit;
		this->isFlexible = isFlexible;
	};
};

class Budget
{
private:
	vector<BudgetItem> items;


public:
	Budget();
	~Budget();

	void AddTransaction(string itemName, int amount);
	//void OopsyRemove(); ADD LATER, maybe....
	void AddBudgetItem(string itemName, int itemMaxLimit, bool isItemFlexible = false);
	void RemoveBudgetItem(string itemName);
	void Print();
};