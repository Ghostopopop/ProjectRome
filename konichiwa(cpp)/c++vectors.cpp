//.?------------------------------------------
//.! author: hitarth (ghost)
//.` date: 2023-05-09 15:29:00
//.?------------------------------------------//.
#include <iostream>
#include <vector> //` most imp to include to use vectors
using namespace std;
//. refrence
//! https://en.cppreference.com/w/cpp/container/vector
int main()
{
    //. Vector declaration
    vector<int> numbers{19, 28, 37, 46};

    //. Accessing and modifying the vector
    cout << "The first element in the vector is " << numbers[0] << endl;
    //. This method does not include bound checking
    cout << "The second element in the vector is " << numbers.at(1) << endl;
    //. It provides bound checking
    numbers.at(0) = 69;
    //. Updates the first element from 19 to 69
    int user_input;
    cout << "Enter a value to be added to the end of the vector: ";
    cin >> user_input;
    numbers.push_back(user_input);
    //. Adds user_input to the end of the vector
    cout << "The size of the vector is now " << numbers.size() << endl;

    //. Removing an element from the end of a vector
    cout << "Removing the last element from the vector..." << endl;
    numbers.pop_back(); //. Removes the last element from the vector
    cout << "The size of the vector is now " << numbers.size() << endl;

    //. Inserting elements at a specific position in the vector
    cout << "Inserting a new element at position 2..." << endl;
    numbers.insert(numbers.begin() + 2, 99); //. Inserts 99 at index 2
    cout << "The vector now contains: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    //. Removing elements from a specific position or range of positions in the vector
    cout << "Removing elements from position 1 to 3..." << endl;
    numbers.erase(numbers.begin() + 1, numbers.begin() + 4); //. Removes elements from index 1 to 3
    cout << "The vector now contains: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    //. Removing all elements from the vector
    cout << "Removing all elements from the vector..." << endl;
    numbers.clear(); //. Removes all elements from the vector
    cout << "The size of the vector is now " << numbers.size() << endl;

    //. Changing the size of the vector
    cout << "Resizing the vector to 5 elements..." << endl;
    numbers.resize(5); //. Changes the size of the vector to 5
    cout << "The size of the vector is now " << numbers.size() << endl;

    //. Allocating memory for the vector in advance
    cout << "Reserving space in the vector for 10 elements..." << endl;
    numbers.reserve(10); //. Allocates space for 10 elements in the vector
    cout << "The capacity of the vector is now " << numbers.capacity() << endl;

    //. creating a 2D vector
    vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    //. accessing elements of a 2D vector
    vector<vector<int>> movie_ratings{
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}};
    cout << "Here are the movie ratings for reviewer #1 using array syntax:" << endl;
    cout << movie_ratings[0][0] << endl; //. access the first element of the first row
    cout << movie_ratings[0][1] << endl; //. access the second element of the first row
    cout << movie_ratings[0][2] << endl; //. access the third element of the first row
    cout << movie_ratings[0][3] << endl; //. access the fourth element of the first row

    cout << "\nHere are the movie ratings for reviewer #1 using vector syntax:" << endl;
    cout << movie_ratings.at(0).at(0) << endl; //. access the first element of the first row with bounds checking
    cout << movie_ratings.at(0).at(1) << endl; //. access the second element of the first row with bounds checking
    cout << movie_ratings.at(0).at(2) << endl; //. access the third element of the first row with bounds checking
    cout << movie_ratings.at(0).at(3) << endl; //. access the fourth element of the first row

    //. singe swap in
    std::vector<int> vec = {1, 2, 3, 4, 5};
    swap(vec[1], vec[3]); //* 1 4 3 2 5
    //. swap for 2  vector set
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {4, 5, 6};
    swap(vec1, vec2);

    return 0;
}
