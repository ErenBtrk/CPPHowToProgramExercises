#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "Customer.h"
#include "Transaction.h"




class FileProcess
{
	
public:
	FileProcess();
	void newTransaction();
	void writeToTransFile();
	void readFromTransFile();
	void displayTransFile();
	void clearTransFile();
	
	void newCustomer();
	void writeToOldMasterFile();
	void readFromOldMasterFile();
	void displayOldMastFile();
	void clearOldMastFile();

	void updateNewMastFile();

	void Menu();
	
private:
	bool is_empty(std::fstream& pFile);
	std::fstream& GotoLine(std::fstream& file, unsigned int num);

	std::fstream inOldMaster;
	std::fstream inTransaction;
	std::fstream outNewMaster;
	std::vector<Transaction> transVec;
	std::vector<Customer> customerVec;
	std::vector<Customer> newMasterVec;

};



