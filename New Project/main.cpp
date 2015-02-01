// A program where the user inputs their exam score grade
// on a scale of 1-100 and the computer outputs a letter grade


#include <iostream>
using namespace std;

void examgradefinder()

{
    
int testscore; 
  
    cout << "What was your grade on the programming exam?" << endl; 
    cout << "Enter a score between 0-100";
  
    
    cin >> testscore;
 
    if (testscore > 100){
    cout << "A score over 100 is impossible on this test.";}
    
        else if (testscore == 100){
        cout << "You received a perfect score on the test!";}
    
        else if (testscore >= 90){
        cout << "You received an A on the test.";}
        
        else if (testscore >= 80){
        cout << "You received an B on the test.";}
        
        else if (testscore >= 70){
        cout << "You received an C on the test.";}
        
        else if (testscore >= 60){
        cout << "You received an D on the test.";}
        
        else if (testscore <= 59) {
        cout << "You received an F on the test.";}
        
        
}   


int main()
{
  examgradefinder();
  return 0;
}

