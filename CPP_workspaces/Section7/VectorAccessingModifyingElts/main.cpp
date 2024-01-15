#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> test_scores {100,95,88,87,90};
	cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;
    cout << "-------------------------------" << endl;
    cout << "First score at index 0: " << test_scores.at(0) << endl;
    cout << "Second score at index 1: " << test_scores.at(1) << endl;
    cout << "Third score at index 2: " << test_scores.at(2) << endl;
    cout << "Fourth score at index 3: " << test_scores.at(3) << endl;
    cout << "Fifth score at index 4: " << test_scores.at(4) << endl;
    cout << "-------------------------------" << endl;
    //Changing the content of vector element
    cout << "Enter First score index:";
    cin >> test_scores [0];
    cout << "Enter Second score index:";
    cin >> test_scores [1];
    cout << "Enter Third score index:";
    cin >> test_scores [2];
    cout << "Enter Fourth score index:";
    cin >> test_scores [3];
    cout << "Enter Fifth score index:";
    cin >> test_scores [4];
    cout << "-------------------------------" << endl;
    cout << "After changing vector elements" << endl;
    cout << "First score at index 0: " << test_scores.at(0) << endl;
    cout << "Second score at index 1: " << test_scores.at(1) << endl;
    cout << "Third score at index 2: " << test_scores.at(2) << endl;
    cout << "Fourth score at index 3: " << test_scores.at(3) << endl;
    cout << "Fifth score at index 4: " << test_scores.at(4) << endl;
    cout << "-------------------------------" << endl;
    cout << "Utilizing Push back to grow the vector" << endl;
    test_scores.push_back(80);
    test_scores.push_back(96);
    cout << "-------------------------------" << endl;
    cout << "After changing vector elements" << endl;
    cout << "First score at index 0: " << test_scores.at(0) << endl;
    cout << "Second score at index 1: " << test_scores.at(1) << endl;
    cout << "Third score at index 2: " << test_scores.at(2) << endl;
    cout << "Fourth score at index 3: " << test_scores.at(3) << endl;
    cout << "Fifth score at index 4: " << test_scores.at(4) << endl;
    cout << "Sixth score at index 5: " << test_scores.at(5) << endl;
    cout << "Seventh score at index 6: " << test_scores.at(6) << endl;
    //cout << "Eightth score at index 6: " << test_scores.at(7) << endl;
    cout << "There are " << test_scores.size() << " no. of elements present in this vector" << endl;
    cout << "-------------------------------" << endl;
    //Example of 2D vector
    vector <vector <int>> movie_ratings
    {
        {1,2,3,4},
        {1,2,4,4},
        {2,4,5,7}
    };
    cout << "\nHere are the movie ratings for reviewer #1" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;
    
    cout << "-------------------------------" << endl;
    cout << "\nHere are the movie ratings for reviewer #1" << endl;
    cout << movie_ratings[0].at(0) << endl;
    cout << movie_ratings[0].at(1) << endl;
    cout << movie_ratings[0].at(2) << endl;
    cout << movie_ratings[0].at(3) << endl;
    
	return 0;
}
