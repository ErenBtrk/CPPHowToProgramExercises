#include "Store.h"

std::default_random_engine engine(static_cast<unsigned int>(time(nullptr)));
std::uniform_int_distribution<unsigned int> randomInt(1, 4);


Store::Store()
{
	
}

void Store::startDay()
{	
	
	int currTime = 0;
	int arrival = currTime + randomInt(engine);
	int service = arrival + randomInt(engine);
	int longestQueue = 0;
	int longestQueueTime = 0;
	while (currTime < 720)
	{
		std::cout << "Current time : " << currTime << std::endl;
		customerQueue.printQueue();
		if (currTime == arrival)
		{
			Customer newCustomer;
			newCustomer.setArrivalMinute(currTime);
			newCustomer.setServiceMinute(service);
			customerQueue.push(newCustomer);
			arrival = currTime + randomInt(engine);
			
			
		}
		if (customerQueue.getQueueSize() > longestQueue)
		{
			longestQueue = customerQueue.getQueueSize();
			longestQueueTime = currTime;
		}
		if (currTime == service)
		{
			customerQueue.pop();
			service = currTime + randomInt(engine);
		}
		currTime++;
		
	}

	std::cout << "Longest queue size : " << longestQueue << " at " << longestQueueTime << " minute\n";

}

