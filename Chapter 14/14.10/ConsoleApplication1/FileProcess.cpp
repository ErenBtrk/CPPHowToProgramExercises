#include "FileProcess.h"
#include "Person.h"
#include <iomanip>


FileProcess::FileProcess()
{

}

void FileProcess::createFile()
{
    
    file.open("nameage.dat",  std::ios::binary  | std::ios::in);
    if (!file)
    {
        std::cout << "Cannot open the file,the file doesnt exist.Creating new file..." << std::endl;
        file.open("nameage.dat", std::ios::out | std::ios::binary | std::ios::trunc | std::ios::in);
        if (!file)
        {
            std::cerr << "Cannot open the file." << std::endl;
            exit(EXIT_FAILURE);
        }
        else
        {
            Person person;

            for (int i = 0; i < 100; i++)
            {
                file.write(reinterpret_cast<const char*>(&person), sizeof(Person));
            }
        }

        
    }
    else
    {
        std::cout << "The file already exists." << std::endl;
    }
    file.close();
    
}

void FileProcess::newRecord()
{
    file.open("nameage.dat", std::ios::binary | std::ios::out | std::ios::in);
    if (!file)
    {
        std::cerr << "The file couldnt be opened." << std::endl;
        exit(EXIT_FAILURE);
    }
    else
    {
        Person person;
        int id;
        std::cout << "Enter id : ";
        std::cin >> id;
        file.seekg((id-1) * sizeof(Person));
        file.read(reinterpret_cast<char*>(&person), sizeof(Person));
        if (person.getId() == 0)
        {
            int age;
            std::string firstName;
            std::string lastName;
            std::cout << "Enter age :";
            std::cin >> age;
            std::cout << "Enter first name : ";
            std::cin >> std::setw(15) >> firstName;
            std::cout << "Enter last name :";
            std::cin >> std::setw(15) >> lastName;

            person.setId(id);
            person.setAge(age);
            person.setFirstName(firstName);
            person.setLastName(lastName);
            file.seekp((id-1) * sizeof(Person));
            file.write(reinterpret_cast<const char*>(&person), sizeof(Person));
            
        }
        else
        {
            std::cout << "There is an existing account with " << id << " id." << std::endl;
        }
    }
    file.close();
}

void FileProcess::updateRecord()
{
    file.open("nameage.dat", std::ios::out | std::ios::binary | std::ios::in);
    if (!file)
    {
        std::cerr << "The file couldnt be opened." << std::endl;
        exit(EXIT_FAILURE);
    }
    else
    {
        Person person;
        int id;
        std::cout << "Enter id : ";
        std::cin >> id;
        file.seekg((id - 1) * sizeof(Person));
        file.read(reinterpret_cast<char*>(&person), sizeof(Person));
        if (person.getId() != 0)
        {
            std::cout << person.getId() << "\t" << person.getAge() << "\t" << person.getFirstName() << "\t" << person.getLastName()<< std::endl;
            
            file.read(reinterpret_cast<char*>(&person), sizeof(Person));
            int age;
            std::string firstName;
            std::string lastName;
            std::cout << "Enter age :";
            std::cin >> age;
            std::cout << "Enter first name : ";
            std::cin >> firstName;
            std::cout << "Enter last name :";
            std::cin  >> lastName;

            person.setId(id);
            person.setAge(age);
            person.setFirstName(firstName);
            person.setLastName(lastName);

            file.seekp((id - 1) * sizeof(Person));
            file.write(reinterpret_cast<const char*>(&person), sizeof(Person));

        }
        else
        {
            std::cout << "There is not an existing account with " << id << " id." << std::endl;
        }
    }
    file.close();
}

void FileProcess::deleteRecord()
{
    file.open("nameage.dat", std::ios::out | std::ios::binary | std::ios::in);
    if (!file)
    {
        std::cerr << "The file couldnt be opened." << std::endl;
        exit(EXIT_FAILURE);
    }
    else
    {
        Person person;
        int id;
        std::cout << "Enter id : ";
        std::cin >> id;
        file.seekg((id - 1) * sizeof(Person));
        file.read(reinterpret_cast<char*>(&person), sizeof(Person));
        if (person.getId() != 0)
        {
            std::cout << person.getId() << "\t" << person.getAge() << "\t" << person.getFirstName() << "\t" << person.getLastName() << std::endl;         
            person.setId(0);
            person.setAge(0);
            person.setFirstName("");
            person.setLastName("");
            file.seekp((id - 1) * sizeof(Person));
            file.write(reinterpret_cast<const char*>(&person), sizeof(Person));

        }
        else
        {
            std::cout << "There is not an existing account with " << id << " id." << std::endl;
        }
    }
    file.close();
}

void FileProcess::showRecords()
{
    file.open("nameage.dat", std::ios::in | std::ios::binary);
    if (!file)
    {
        std::cerr << "The file couldnt be opened." << std::endl;
        exit(EXIT_FAILURE);
    }
    else
    {
        file.seekg(0);
        Person person;
        std::cout << "ID" << "\t" << "AGE" << "\t" << "FName" << "\t" << "Lname" << std::endl;
        file.read(reinterpret_cast<char*>(&person), sizeof(Person));
        while (file && !file.eof())
        {
            if (person.getId() != 0)
            {
                std::cout << person.getId() << "\t" << person.getAge() << "\t" << person.getFirstName() << "\t" << person.getLastName() << std::endl;
            }
            file.read(reinterpret_cast<char*>(&person), sizeof(Person));
        }
    }
    file.close();
}

void FileProcess::Menu()
{
    int choice;
    while(true)
    {
        std::cout << "[1]Create new file\n";
        std::cout << "[2]New record\n";
        std::cout << "[3]Update record\n";
        std::cout << "[4]Show records\n";
        std::cout << "[5]Delete record\n";
        std::cout << "[-1] to exit :";
        std::cin >> choice;
        if (choice == -1)
        {
            break;
        }
        switch (choice)
        {
        case 1:
            createFile();
            break;
        case 2:
            newRecord();
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
        default:
            std::cout << "Invalid choice." << std::endl;
            break;

        }
        std::cout << "\n\n\n";
    }
}

