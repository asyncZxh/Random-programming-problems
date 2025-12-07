#include <iostream>

int main()
{
    std::string word;
    int vowelCount = 0;
    std::cout << "Enter word: ";
    std::cin >> word;
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < word.length(); i++)
    {
        for (char vowel : vowels)
        {
            if (std::tolower(word[i]) == vowel)
                vowelCount++;
        }
    }
    std::cout << vowelCount;

    return 0;
}