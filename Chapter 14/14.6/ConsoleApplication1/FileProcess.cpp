#include "FileProcess.h"
#include <algorithm>
#include <iomanip>

FileProcess::FileProcess()
{
	readFromTransFile();
	readFromOldMasterFile();
}

void FileProcess::newTransaction()
{
	int accNo;
	double dollarAmount;

	std::cout << "Enter account number : ";
	std::cin >> accNo;
	std::cout << "Enter dollar amount : ";
	std::cin >> dollarAmount;

	transVec.push_back(Transaction(accNo, dollarAmount));
	sort(transVec.begin(), transVec.end(), compareTransaction);
	writeToTransFile();
}

void FileProcess::writeToTransFile()
{
	if (!inTransaction.is_open())
	{
		inTransaction.open("transaction.dat", std::ios::out);
		if (!inTransaction)
		{
			std::cerr << "transaction.dat file could not be opened" << std::endl;
			exit(EXIT_FAILURE);
		}
		else
		{
			for (size_t i = 0; i < transVec.size(); i++)
			{
				inTransaction << transVec[i].getAccountNumber() << "\t" << transVec[i].getDollarAmount() << std::endl;
			}
		}
	}
	inTransaction.close();
}

void FileProcess::readFromTransFile()
{
	
	if (!inTransaction.is_open())
	{
		inTransaction.open("transaction.dat", std::ios::in);
		if (!inTransaction)
		{
			std::cerr << "transcation.dat file has been created." << std::endl;
			inTransaction.open("transaction.dat", std::ios::out);
		}
		else
		{
			int accNo;
			double dollarAmount;
			inTransaction >> accNo >> dollarAmount;
			while (!inTransaction.eof())
			{
				transVec.push_back(Transaction(accNo, dollarAmount));
				inTransaction >> accNo >> dollarAmount;
			}
		}
	}
	inTransaction.close();
}

void FileProcess::clearTransFile()
{
	inTransaction.open("transaction.dat", std::ios::out | std::ios::trunc);
	inTransaction.close();
	transVec.clear();
}

void FileProcess::displayTransFile()
{
	if (!inTransaction.is_open())
	{
		inTransaction.open("transaction.dat", std::ios::in);
		if (!inTransaction)
		{
			std::cerr << "File could not be opened." << std::endl;
			exit(EXIT_FAILURE);
		}
		else
		{
			int accNo;
			double dollarAmount;
			std::cout << "--------- transaction.dat ---------" << std::endl << std::endl;
			std::cout << std::setw(15) << std::left << "Account No" << std::setw(15) << std::left << "Dollar Amount" << std::endl;
			inTransaction >> accNo >> dollarAmount;
			while (!inTransaction.eof())
			{
				std::cout << std::setw(15) << std::left << accNo << std::setw(15) << std::left << dollarAmount << std::endl;
				inTransaction >> accNo >> dollarAmount;
			}
		}
	}
	inTransaction.close();
}

void FileProcess::newCustomer()
{
	int accNo;
	std::string name;
	std::string adress;
	std::string phoneNo;
	double balance;

	std::cout << "Enter account number : ";
	std::cin >> accNo;
	std::cout << "Enter name : ";
	std::cin >> name;
	std::cout << "Enter adress : ";
	std::cin >> adress;
	std::cout << "Enter phoneNo : ";
	std::cin >> phoneNo;
	std::cout << "Enter balance : ";
	std::cin >> balance;
	customerVec.push_back(Customer(accNo, name,adress,phoneNo,balance));
	sort(customerVec.begin(), customerVec.end(), compareCustomer);
	writeToOldMasterFile();
}

void FileProcess::writeToOldMasterFile()
{
	if (!inOldMaster.is_open())
	{
		inOldMaster.open("oldMast.dat", std::ios::out);
		if (!inOldMaster)
		{
			std::cerr << "oldMast.dat file couldnt be opened." << std::endl;
			exit(EXIT_FAILURE);
		}
		else
		{
			for (size_t i = 0; i < customerVec.size(); i++)
			{
				inOldMaster << customerVec[i].getAccountNumber() << "\t" << customerVec[i].getName() << "\t" 
							<< customerVec[i].getAdress() << "\t" << customerVec[i].getPhoneNo() << "\t"
							<< customerVec[i].getBalance() << std::endl;
			}

		}
	}
	inOldMaster.close();
}

void FileProcess::readFromOldMasterFile()
{
	if (!inOldMaster.is_open())
	{
		inOldMaster.open("oldMast.dat", std::ios::in);
		if (!inOldMaster)
		{
			std::cerr << "oldMast.dat file has been created." << std::endl;
			inOldMaster.open("oldMast.dat", std::ios::out);
		}
		else
		{
			int accNo;
			std::string name;
			std::string adress;
			std::string phoneNo;
			double balance;
			inOldMaster >> accNo >> name >> adress >> phoneNo >> balance;
			while (!inOldMaster.eof())
			{
				customerVec.push_back(Customer(accNo, name,adress,phoneNo,balance));
				inOldMaster >> accNo >> name >> adress >> phoneNo >> balance;
			}
		}
	}
	inOldMaster.close();
}

void FileProcess::displayOldMastFile()
{
	if (!inOldMaster.is_open())
	{
		inOldMaster.open("oldMast.dat", std::ios::in);
		if (!inOldMaster)
		{
			std::cerr << "oldMast.dat File could not be opened." << std::endl;
			exit(EXIT_FAILURE);
		}
		else
		{
			int accNo;
			std::string name;
			std::string adress;
			std::string phoneNo;
			double balance;
			std::cout << "--------- oldMast.dat ---------" << std::endl<<std::endl;
			std::cout << std::setw(15) << std::left << "Account No" << std::setw(15) << std::left << "Name"
				<< std::setw(15) << std::left << "Adress" << std::setw(15) << std::left << "Phone No"
				<< std::setw(15) << std::left << "Balance" << std::endl;
			inOldMaster >> accNo >> name >> adress >> phoneNo >> balance;
			while (!inOldMaster.eof())
			{
				std::cout << std::setw(15) << std::left << accNo << std::setw(15) << std::left << name
					<< std::setw(15) << std::left << adress << std::setw(15) << std::left << phoneNo
					<< std::setw(15) << std::left << balance << std::endl;
				inOldMaster >> accNo >> name >> adress >> phoneNo >> balance;
			}
		}
	}
	inOldMaster.close();
}

void FileProcess::clearOldMastFile()
{
	inOldMaster.open("oldMast.dat", std::ios::out | std::ios::trunc);
	inOldMaster.close();
	customerVec.clear();
}




bool FileProcess::is_empty(std::fstream& pFile)
{
	return pFile.peek() == std::fstream::traits_type::eof();
}

void FileProcess::Menu()
{
	int choice = 0;
	while (true)
	{
		std::cout << "[1]-New Transaction " << std::endl;
		std::cout << "[2]-Display transaction.dat" << std::endl;
		std::cout << "[3]-Clear transaction.dat " << std::endl;
		std::cout << "[4]-New Customer " << std::endl;
		std::cout << "[5]-Display oldMast.dat" << std::endl;
		std::cout << "[6]-Clear oldMast.dat" << std::endl;
		std::cout << "[7]-Update newMast.dat" << std::endl;
		std::cout << "Enter [-1] to exit : ?  ";
		std::cin >> choice;
		std::cout << "\n\n";
		if (choice == -1)
		{
			exit(EXIT_SUCCESS);
		}
		switch (choice)
		{
		case 1:
			newTransaction();
			break;
		case 2:
			displayTransFile();
			break;
		case 3:
			clearTransFile();
			break;
		case 4:
			newCustomer();
			break;
		case 5:
			displayOldMastFile();
			break;
		case 6:
			clearOldMastFile();
			break;
		case 7:
			updateNewMastFile();
			break;
		default:
			std::cout << "Invalid choice." << std::endl;
			break;
		}
		std::cout << "\n\n\n\n";
	}


}

std::fstream& FileProcess::GotoLine(std::fstream& file, unsigned int num) {
	file.seekg(std::ios::beg);
	for (int i = 0; i < num - 1; ++i) {
		file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return file;
}

void FileProcess::updateNewMastFile()
{		
	
		newMasterVec = customerVec;
		for (size_t i = 0; i < transVec.size(); i++)
		{
			bool isCustomerFound = false;
			for (size_t j = 0; j < newMasterVec.size(); j++)
			{
				if (newMasterVec[j].getAccountNumber() == transVec[i].getAccountNumber())
				{
					auto balance = newMasterVec[j].getBalance();
					newMasterVec[j].setBalance(balance + transVec[i].getDollarAmount());
					isCustomerFound = true;
				}	
			}	
			if (!isCustomerFound)
			{
				std::cout << "No account found for account number : " << transVec[i].getAccountNumber() << std::endl;
			}
		}

		if (!outNewMaster.is_open())
		{
			outNewMaster.open("outNewMast.dat", std::ios::out);
			if (!outNewMaster)
			{
				std::cerr << "outNewMast.dat file couldnt be opened." << std::endl;
				exit(EXIT_FAILURE);
			}
			else
			{
				for (size_t i = 0; i < newMasterVec.size(); i++)
				{
					outNewMaster << newMasterVec[i].getAccountNumber() << "\t" << newMasterVec[i].getName() << "\t"
						<< newMasterVec[i].getAdress() << "\t" << newMasterVec[i].getPhoneNo() << "\t"
						<< newMasterVec[i].getBalance() << std::endl;
				}
			}
		}
	
		outNewMaster.close();
}