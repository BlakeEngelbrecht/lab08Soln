/**
 * CSC131 - Computational Thinking
 * Missouri State University
 * 
 * @file lab08.cpp
 * TODO: Modify the next line accordingly and erase this line
 * @author Your Name <your_email@live.missouristate.edu>
 */

#include <cstdlib>
#include <iostream>
#include <string>

/**
 * Calculate the retail cost based on the wholesale cost and 
 * the given markup.
 * @param cost the wholesale cost of the item
 * @param markup the markup, as a percent, to apply to wholesale cost
 * @return The retail cost is returned.
 */
double calculateRetail(double cost, double markup);

/**
 * Entry point of this lab.
 * @param argc the number of command-line arguments
 * @param argv an array of the command-line arguments
 * @return EXIT_SUCCESS is returned upon successful execution of this
 * program.
 */
int main(int argc, char** argv)
{
    std::cout << "Enter item description: ";
    std::string description{};
    getline(std::cin, description);
    std::cout << "You entered " << description << std::endl;;
    std::cout << "Enter item wholesale cost: ";
    double cost{};
    std::cin >> cost;
    std::cout << "You entered " << cost << std::endl;
    std::cout << "Enter item markup percentage: ";
    double markup{};
    std::cin >> markup;
    std::cout << "You entered " << markup << std::endl;
    std::cout << std::endl;
    std::cout << "Retail price for " << description << " is " 
	      << calculateRetail(cost, markup) << std::endl; 
    
    return EXIT_SUCCESS;
}

double calculateRetail(double cost, double markup)
{
    return cost + cost * markup / 100;
}

