#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

int main()
{
    std::ofstream oFile("textFile.txt",std::ios::out);
    if(!oFile)
    {
        std::cerr<< "The file couldnt be opened." << std::endl;
    }
    else
    {
        for(int i = 0 ; i < 10 ; i++)
        {
            oFile << i << " ";
        }
    }
    oFile.close();


    std::vector <int> vec;
    std::ostream_iterator<int> output(std::cout , " ");

    std::ifstream iFile("textFile.txt",std::ios::in);

    if(!iFile)
    {
        std::cerr<< "The file couldnt be opened." << std::endl;
    }
    else
    {
        std::istream_iterator<int> input(iFile);
        copy(input,std::istream_iterator<int>(),back_inserter(vec));

    }

    copy(vec.cbegin(),vec.cend(),output);






	return 0;
}
