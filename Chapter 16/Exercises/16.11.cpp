#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>

int main()
{
    std::list<std::string> list1 ={"Kevin Durant","Lebron James","Kobe Bryant","Michael Jordan","Allen Iverson"};
    std::list<std::string> list2 ={"Hakeem Olajuwon","Allen Iverson","Shaq O'Neal","Julius Erving","Alonzo Mourning"};
    std::list<std::string> resultList;
    list1.sort();
    list2.sort();
    std::merge(list1.cbegin(),list1.cend(),list2.cbegin(),list2.cend(),back_inserter(resultList));

    std::ostream_iterator<std::string> output(std::cout , "\n");
    copy(resultList.begin(),resultList.end(),output);

	return 0;
}
