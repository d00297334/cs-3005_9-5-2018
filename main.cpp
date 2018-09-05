#include <vector>
#include <iostream>

int readOne(std::istream& input_istream) {
    int x;
    input_istream >> x;
    return x;
}

int main() {
    int y = readOne(std::cin);
    std::cout << "int: " << y << std::endl;
    return 0;
}


//./main < textfile.txt
/*
//vector of doubles named numbers
//add up all items in a vector
//& is a reference
double addThemUp (const std::vector < double > &numbers) {
    unsigned int i;
    double total = 0.0;
    for (i = 0; i < numbers.size(); i++) {
        total += numbers[i];
    }
    return total;
}

int main() {
    std::vector < double > my_numbers;
    my_numbers.push_back(4.5);
    my_numbers.push_back(-0.2);
    my_numbers.push_back(1.3);
    double sum = addThemUp(my_numbers);
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

//copy a vector
//std::vector < double>  copy = old_vector
//std::sort must #include <algorithm>
//std::sort(copy.begin(), copy.end());

*/