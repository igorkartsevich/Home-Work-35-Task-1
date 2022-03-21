#include <iostream>
#include <vector>

class Data {
public:
    Data(std::initializer_list<int> inData) : data(inData) {}

    void print() {
        for (auto element : data)
            std::cout << element << " ";
    }

private:
    std::vector<int> data;
};

int main()
{
    Data data = { 1, 2, 3, 4, 5 };

    data.print();

    return 0;
}