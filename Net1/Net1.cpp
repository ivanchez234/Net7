#include <iostream>
#include <string>

class bad_length
{

};
int function(std::string str, int forbidden_length)
{
    if (static_cast<int>(str.length()) == forbidden_length)
    {
        throw bad_length();
    }
    return static_cast<int>(str.length());
}
int main()
{
    setlocale(LC_ALL, "Rus");
    int forbidden_length{};
    std::string word{};
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    
    while (true)
    {
        std::cout << "Введите слово: ";
        std::cin >> word;
        try
        {
            int len = function(word, forbidden_length);
            std::cout<< "Длина слова \""<< word<<"\" равна " << len << std::endl;

        }
        catch (bad_length&)
        {
            std::cout << "Мы ввели слово запретной длины! До свидания";
            break;
        }

    }
    
}
