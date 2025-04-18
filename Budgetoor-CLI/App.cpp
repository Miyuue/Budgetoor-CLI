#include "App.hpp"

#include <iostream>

string App::GetUserInput(const string& prompt) const
{
	string input;

	cout << prompt << ": ";
	getline(cin, input);
	cout << endl;

	return input;
}

bool App::DisplayMenu() const
{
	// Display Options
	cout << "1.) Add Transaction" << endl;
	cout << "2.) Remove Most Recent Transaction" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "3.) Create new budget item" << endl;
	cout << "4.) Remove budget item" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "5.) Show Budget" << endl;
	cout << "6.) Exit" << endl << endl;

	// Get choice
	string input = GetUserInput("What option?");
	int choice;
	try { choice = stoi(input); } // Try to convert string input to int
	catch (exception e) { choice = -1; } // If it can't be converted, defualt to an invalid input

	// Execute choice
	switch (choice)
	{
	case 1: // Add transaction
		cout << "Feature unavailable at the moment..." << endl << endl;
		break;

	case 2: // Remove most recent transaction
		cout << "Feature unavailable at the moment..." << endl << endl;
		break;

	case 3: // Create new budget item
		cout << "Feature unavailable at the moment..." << endl << endl;
		break;

	case 4: // Remove budget item
		cout << "Feature unavailable at the moment..." << endl << endl;
		break;

	case 5: // Show budget
		cout << "Feature unavailable at the moment..." << endl << endl;
		break;

	case 6: // Exit
		cout << "Bye bye" << endl << endl;
		return true;
		break;

	default: // Invalid input
		cout << "That input was invalid, try again." << endl << endl;
		break;
	}

	return false; // Loop the menu
}

App::App()
{

}

App::~App()
{

}

void App::Init()
{
	cout << endl << "Welcome to Budgetoor-CLI!" << endl << endl;

	// Load budget file, if any
}

const bool App::Run()
{
	return DisplayMenu();
}