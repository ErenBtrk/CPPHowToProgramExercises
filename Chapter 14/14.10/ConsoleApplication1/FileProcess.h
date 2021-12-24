#pragma once
#include <iostream>
#include <fstream>

class FileProcess
{
public:
	FileProcess();
	void Menu();
	
private:
	void createFile();
	void newRecord();
	void showRecords();
	void updateRecord();
	void deleteRecord();
	std::fstream file;

};