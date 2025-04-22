#include "Budget.hpp"
#include <iostream>

Budget::BudgetItem* Budget::GetBudgetItem(const string& name)
{
	// Find BudgetItem
	// (A linear search is sufficient for my uses)
	for (BudgetItem bi : items)
	{
		if (name == bi.name) return &bi; // Found
	}

	return nullptr; // Not found
}

Budget::Budget()
{
}

Budget::~Budget()
{
}

void Budget::AddTransaction(string itemName, int amount)
{
	BudgetItem* bi = GetBudgetItem(itemName); // Attempt to find BudgetItem

	if (bi == nullptr) // Not found
	{
		cout << "That BudgetItem doesn't exist." << endl << endl;
		return;
	}

	bi->currAmount += amount; // Add transaction

	if (bi->currAmount > bi->maxAmount) // Overbudget, use flex
	{
		// TODO: IMPLEMENT PULLING FROM A FLEX ITEM WHEN OVERBUDGET
	}
}

void Budget::AddBudgetItem(string itemName, int itemMaxAmount, bool isItemFlexible)
{
	if (GetBudgetItem(itemName) == nullptr) // if the BudgetItem doesn't already exist
	{
		items.push_back(BudgetItem(itemName, itemMaxAmount, isItemFlexible));
	}
	else
	{
		cout << "That BudgetItem already exists." << endl << endl;
	}
}

void Budget::RemoveBudgetItem(string itemName)
{
}

void Budget::Print()
{
	cout << "Here is the budget:" << endl << endl;

	for (BudgetItem bi : items)
	{
		cout << bi.name << ": $" << bi.currAmount << " / $" << bi.maxAmount;
		if (bi.currAmount > bi.maxAmount && !bi.isFlexible) cout << " | OVERBUDGET";

		cout << endl;
	}

	cout << endl;
}
