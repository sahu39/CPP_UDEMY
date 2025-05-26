#include <iostream>
#include <vector>

using namespace std;
int main()
{
    //vector <char> vowels; //empty
    //vector <char> vowels[5]; // 5 initialized to 0
    vector <char> vowels {'a','e','i','o','u'};
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;
    //Test scores using Array Syntax
    cout << "New Test scores using array Syntax==========" << endl; 
    vector <int> test_scores {100,98,99};
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;
    
    //Test Socores using vector syntax
    cout << "Test scores using vector Syntax==========" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    
    cout << "There are " << test_scores.size() << " test_scores present in test_scores vector" << endl;
    
    //Changing the test_socre vector elements
    cout << "Enter 3 scores" << endl;
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

     //Test Socores using vector syntax
    cout << "Test scores using vector Syntax==========" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    
    //Enter atest scores to vector
    int new_score {0};
    cout << "add neww score" << endl;
    cin >> new_score;
    
    test_scores.push_back(new_score);
    
    cout << "Enter one more test score to vector" << endl;
    cin >> new_score;
    test_scores.push_back(new_score);
         
    //Test Socores using vector syntax
    cout << "Test scores using vector Syntax==========" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    
    cout << "There are now " << test_scores.size() << " elements present in the test_scores" << endl;
    //cout << "This should cause an exception" << test_scores.at(10) << std::endl;
    
    //Example of 2D vector
    vector <vector <int>> movie_ratings
    {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    
    cout << "Here is the movie ratings of the movies using array syntax of reviewer #1" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    
    cout << "Here is the movie ratings of the movies using vector syntax of reviewer #2" << endl;
    cout << movie_ratings.at(1).at(0) << endl;
    cout << movie_ratings.at(1).at(1) << endl;
    cout << movie_ratings.at(1).at(2) << endl;
    
    
        
   
    
    
    
return 0;
}