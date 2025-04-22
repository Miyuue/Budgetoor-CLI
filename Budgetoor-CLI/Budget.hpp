#include <string>
#include <vector>

using namespace std;

class Budget
{
private:
	struct BudgetItem
	{
		string name;
		int currAmount = 0;
		int maxAmount;
		bool isFlexible;

		BudgetItem(string name, int maxAmount, bool isFlexible = false)
		{
			this->name = name;
			this->maxAmount = maxAmount;
			this->isFlexible = isFlexible;
		};
	};

	vector<BudgetItem> items;

	BudgetItem* GetBudgetItem(const string& name);

public:
	Budget();
	~Budget();

	void AddTransaction(string itemName, int amount);
	//void OopsyRemove(); ADD LATER, maybe....
	void AddBudgetItem(string itemName, int itemMaxAmount, bool isItemFlexible = false);
	void RemoveBudgetItem(string itemName);
	void Print();
};