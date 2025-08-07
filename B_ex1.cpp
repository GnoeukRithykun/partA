

/*
 1. Use a while loop to calculate and print the sum of numbers from 1 to 10.
 2. Use a while loop to print the numbers from 10 down to 1.
 In this loop, apply the following special conditions:
 • If the number is 4, do not print the number. Instead, print: "This number
 is 4".
 • If the number is 2, skip it and do not print anything. Do not use the
 continue statement.
 3. Use a while loop to keep asking the user to input numbers. When the user enters
 0, stop the loop and print the total sum of all entered numbers (excluding 0).
*/

#include <iostream>
// part B ex 1
int main(){
    int i = 1;
    int sum = 0;
    while (i < 10 ){
        sum += i;
        i++;       
        
    }
    std::cout << "The sum numbers from 1 to 10 is "<< sum << std::endl;
    return 0;
}

