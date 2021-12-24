#include "FileProcess.h"
#include "Product.h"
#include <iomanip>
#include <string>

FileProcess::FileProcess()
{

}

void FileProcess::initialize()
{
	file.open("hardware.dat",  std::ios::in |  std::ios::binary);
	if (!file)
	{
		std::cout << "The file couldnt open.Creating new one..." << std::endl;
		file.open("hardware.dat", std::ios::out | std::ios::in | std::ios::trunc | std::ios::binary);
		if (!file)
		{
			std::cerr << "Cannot open the file." << std::endl;
			exit(EXIT_FAILURE);
		}

		Product product;

		for (size_t i = 0; i < 100; i++)
		{
			file.write(reinterpret_cast<const char*>(&product), sizeof(Product));
		}
	}
	else
	{
		std::cout << "The file already exists." << std::endl;
	}
	file.close();
}

void FileProcess::newTool()
{
	Product product;
	int productNo;
	

	file.open("hardware.dat", std::ios::out | std::ios::binary | std::ios::in);
	if (!file)
	{
		std::cerr << "Couldnt open the file." << std::endl;
		exit(EXIT_FAILURE);
	}
	else
	{
		std::cout << "Enter product no : ";
		std::cin >> productNo;
		
		file.seekg((productNo - 1) * sizeof(Product));
		file.read(reinterpret_cast<char*>(&product), sizeof(Product));
		if (product.getNo() == 0)
		{
			std::string toolName;
			int quantity;
			double cost;
			std::cout << "Enter tool name : ";
			std::cin.ignore();
			std::getline(std::cin, toolName);
			std::cout << "Enter quantity : ";
			std::cin >> quantity;
			std::cout << "Enter cost : ";
			std::cin >> cost;

			product.setNo(productNo);
			product.setToolName(toolName);
			product.setQuantity(quantity);
			product.setCost(cost);

			file.seekp((productNo - 1) * sizeof(Product));
			file.write(reinterpret_cast<const char*>(&product), sizeof(Product));
		}
		else
		{
			std::cout << "There is an existing record for this product no." << std::endl;
		}
	}
	file.close();

}

void FileProcess::deleteRecord()
{
	file.open("hardware.dat", std::ios::in | std::ios::binary | std::ios::out);
	if (!file)
	{
		std::cerr << "The file couldnt be opened." << std::endl;
		exit(EXIT_FAILURE);
	}
	else
	{
		Product product;
		int productNo;
		std::cout << "Enter a product number : ";
		std::cin >> productNo;
		file.seekg((productNo - 1) * sizeof(Product));
		file.read(reinterpret_cast<char*>(&product), sizeof(Product));
		if (product.getNo() != 0)
		{
			std::cout << std::setw(12) << std::left << product.getNo() << std::setw(12) << std::left << product.getToolName() << std::setw(12) << std::left << product.getQuantity() << std::setw(12) << std::left << product.getCost() << std::endl;
			
			product.setNo(0);
			product.setToolName("");
			product.setQuantity(0);
			product.setCost(0);

			file.seekp((productNo - 1) * sizeof(Product));
			file.write(reinterpret_cast<const char*>(&product), sizeof(Product));
		}
		else
		{
			std::cout << "There isnt an existing record for this " << productNo << " product no." << std::endl;
		}
	}
	file.close();
}

void FileProcess::updateRecord()
{
	file.open("hardware.dat", std::ios::in | std::ios::binary | std::ios::out);
	if (!file)
	{
		std::cerr << "The file couldnt be opened." << std::endl;
		exit(EXIT_FAILURE);
	}
	else
	{
		Product product;
		int productNo;
		std::cout << "Enter a product number : ";
		std::cin >> productNo;
		file.seekg((productNo - 1) * sizeof(Product));
		file.read(reinterpret_cast<char*>(&product), sizeof(Product));
		if (product.getNo() != 0)
		{
			std::cout << std::setw(12) << std::left << product.getNo() << std::setw(12) << std::left << product.getToolName() << std::setw(12) << std::left << product.getQuantity() << std::setw(12) << std::left << product.getCost() << std::endl;
			std::string toolName;
			int quantity;
			double cost;
			
			std::cout << "Enter tool name : ";
			std::cin.ignore();
			std::getline(std::cin, toolName);
			std::cout << "Enter quantity : ";
			std::cin >> quantity;
			std::cout << "Enter cost : ";
			std::cin >> cost;

			product.setNo(productNo);
			product.setToolName(toolName);
			product.setQuantity(quantity);
			product.setCost(cost);

			file.seekp((productNo - 1) * sizeof(Product));
			file.write(reinterpret_cast<const char*>(&product), sizeof(Product));
		}
		else
		{
			std::cout << "There isnt an existing record for this " << productNo << " product no." << std::endl;
		}
	}
	file.close();
}

void FileProcess::showRecords()
{
	file.open("hardware.dat", std::ios::in | std::ios::binary);
	if (!file)
	{
		std::cerr << "The file couldnt be opened." << std::endl;
		exit(EXIT_FAILURE);
	}
	else
	{
		file.seekg(0);
		Product product;
		std::cout << std::setw(20) << std::left << "NO" << std::setw(20) << std::left << "NAME" << std::setw(20) << std::left << "QUANTITY" << std::setw(20) << std::left << "COST" << std::endl;
		file.read(reinterpret_cast<char*>(&product), sizeof(Product));
		while (file && !file.eof())
		{
			if (product.getNo() != 0)
			{
				std::cout << std::setw(20) << std::left << product.getNo() << std::setw(20) << std::left << product.getToolName() << std::setw(20) << std::left << product.getQuantity() << std::setw(20) << std::left << product.getCost() << std::endl;
			}
			file.read(reinterpret_cast<char*>(&product), sizeof(Product));
		}
	}
	file.close();
}

void FileProcess::Menu()
{
	int choice;
	do
	{
		std::cout << "[1]Create new file\n";
		std::cout << "[2]New record\n";
		std::cout << "[3]Update record\n";
		std::cout << "[4]Show records\n";
		std::cout << "[5]Delete record\n";
		std::cout << "[-1] to exit :";
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			initialize();
			break;
		case 2:
			newTool();
			break;
		case 3:
			updateRecord();
			break;
		case 4:
			showRecords();
			break;
		case 5:
			deleteRecord();
			break;
		case -1:
			std::cout << "Exitting..." << std::endl;
			break;
		default:
			std::cout << "Invalid choice." << std::endl;
			break;

		}
		std::cout << "\n\n\n";
	} while (choice != -1);

}