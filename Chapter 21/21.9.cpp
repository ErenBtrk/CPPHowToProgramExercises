#include <iostream>
#include <vector>
#include <sstream>
#include <string.h>

void print(const std::string& str)
{
    const char* c_string = str.c_str();
    char*token = strtok((char*)c_string,"\n ,.-?!;/");
    int loc1,loc2;
    while(token)
    {
        std::string newStr;
        newStr.append(token);
        loc1 = newStr.rfind("ay");
        loc2 = newStr.rfind("r");
        if(loc1 == newStr.length()-2 && loc1 != std::string::npos || loc2 == newStr.length()-1 && loc2 != std::string::npos)
        {
            std::cout << "******Found : " << newStr << std::endl;
        }

        token = strtok(nullptr," ,.-?!;");
    }
}

void print2(const std::string& str)
{
    std::stringstream ss(str);
    std::string tokenizedStr;

    int loc1,loc2;
    while(std::getline(ss,tokenizedStr,' '))
    {
        loc1 = tokenizedStr.rfind("ay");
        loc2 = tokenizedStr.rfind("r");
        if(loc1 == tokenizedStr.length()-2 && loc1 != std::string::npos || loc2 == tokenizedStr.length()-1 && loc2 != std::string::npos)
        {
            std::cout << "******Found: " << tokenizedStr << std::endl;
        }
    }

}

int main()
{
    std::string str1{"I know the pieces fit cuz I watched them fall away "
                    "Mildewed and smoldering. Fundamental differing. "
                    "Pure intention juxtaposed will set two lovers souls in motion "
                    "Disintegrating as it goes testing our communication "
                    "The light that fueled our fire then has burned a hole between us so "
                    "We cannot see to reach an end crippling our communication. "
                    "I know the pieces fit cuz I watched them tumble down "
                    "No fault, none to blame it doesn't mean I don't desire to "
                    "Point the finger, blame the other, watch the temple topple over. "
                    "To bring the pieces back together, rediscover communication "
                    "The poetry that comes from the squaring off between, "
                    "And the circling is worth it. "
                    "Finding beauty in the dissonance. "
                    "There was a time that the pieces fit, but I watched them fall away. "
                    "Mildewed and smoldering, strangled by our coveting "
                    "I've done the math enough to know the dangers of our second guessing "
                    "Doomed to crumble unless we grow, and strengthen our communication. "
                    "Cold silence has a tendency to atrophy any "
                    "Sense of compassion "
                    "Between supposed lovers/brothers "};
    std::string str2{"Here from the king's mountain view "
                    "Here from the wild dream come true "
                    "Feast like a sultan, I do "
                    "On treasures and flesh never few "};
    print2(str1);
    print(str1);







    return 0;
}
