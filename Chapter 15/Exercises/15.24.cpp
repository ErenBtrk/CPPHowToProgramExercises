#include <iostream>
#include <bitset>
#include <set>

const size_t SIZE = 1024;

bool isPrime(int);
void displayPrimeFactors(int,std::bitset<SIZE> &);
void displayFactorization(int,std::bitset<SIZE> &);


int main()
{

    std::bitset<SIZE> bSet;
    bSet.set();
    bSet.reset(0).reset(1);
    for(size_t i = 2 ; i < SIZE ; i++)
    {
        if(!isPrime(i))
        {
            bSet.reset(i);
        }
    }
    for(size_t i = 2 ; i < SIZE ; i++)
    {
        if(bSet[i])
        {
            std::cout << i << " ";
        }
    }

    int userInput;
    std::cout << "\nEnter a number : " << std::endl;
    std::cin >> userInput;

    if(bSet[userInput])
    {
        std::cout << "It's a prime number." << std::endl;
    }
    else
    {
        std::cout << "Its not a prime number." << std::endl;
        displayPrimeFactors(userInput,bSet);
        displayFactorization(userInput,bSet);
    }


	return 0;
}

bool isPrime(int num)
{
    for(size_t i = 2 ; i < num/2 ; i++ )
    {
        if(num%i == 0)
        {
            return false;
        }
    }
    return true;
}

void displayPrimeFactors(int num,std::bitset<SIZE> &bSet)
{
    std::set<int> primeSet;
    size_t i = 2;
    std::cout << "Prime Factors of the number " << num << " : \n";
    while(num>1)
    {
        if(bSet[i])
        {
            if(num % i == 0)
            {
                primeSet.insert(i);
                num = num/i;
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }
    for(auto const item : primeSet)
    {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}

void displayFactorization(int num,std::bitset<SIZE> &bSet)
{
    size_t i = 2;
    std::cout << "Factorization for " << num << " : ";
    while(num>1)
    {
        if(bSet[i])
        {
            if(num % i == 0)
            {
                std::cout << i << "*";
                num = num/i;
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }

}
