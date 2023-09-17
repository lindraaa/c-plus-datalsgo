#include <iostream>
#include <array>

template <typename T, std::size_t size>
void print_array(const std::array<T, size>& data)
{
    for (const auto& x : data)
    {
        std::cout << x << "\n";  //This method it calls the value 
									//from the data which is the 1 to 6
    }
}
int main() {
    std::array<int, 6> data = {1, 2, 3, 4, 5, 6};
    print_array(data);
}


