#include <iostream>

#include <list>
#include <vector>

void ShowList(const std::list<int> &lst);

int main()
{
    std::list<int> lst;
    int number;
    int maxSize;
    int counter = 0;

    std::cout << "Enter list max size: ";
    std::cin >> maxSize;

    srand(time(NULL));

    while (counter != maxSize)
    {
        number = rand() % 100;
        lst.push_back(number);
        ++counter;
    }

    std::list<int>::const_iterator it = lst.begin();
    ++it;
    lst.insert(it, 101);

    std::cout << "Iterator:";
    std::cout << *it << std::endl;

    ShowList(lst);

    std::cout << "size: ";
    std::cout << lst.size() << std::endl;

    lst.sort();

    ShowList(lst);

    std::cout << "Erasing..." << std::endl;
    lst.erase(lst.begin(), lst.end());

    std::cout << "Erased complete. List size: ";
    std::cout << lst.size() << std::endl;


    system("pause");

    return 0;
}

void ShowList(const std::list<int> &lst)
{
    for (auto index : lst)
    {
        std::cout << index << std::endl;
    }
}
