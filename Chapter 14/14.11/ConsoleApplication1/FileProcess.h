#pragma once
#include <iostream>
#include <fstream>

class FileProcess
{
public:
	FileProcess();
	
	void Menu();
private:
	std::fstream file;

	void initialize();
	void newTool();
	void showRecords();
	void deleteRecord();
	void updateRecord();
};