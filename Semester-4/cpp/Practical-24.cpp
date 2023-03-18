

#include <iostream> 
#include <string>
#include <algorithm>

using namespace std; 

// Function to overload + operator    
string operator+(const string& s1, const string& s2) 
{ 
    // Concatenate two strings 
    string s = s1 + s2; 
  
    // Return the concatenated string 
    return s; 
} 
  
// Function to overload <= operator 
bool operator<=(const string& s1, const string& s2) { 
  
    // Compare two strings 
    int result = s1.compare(s2); 
  
    // If s1 is smaller than s2 
    if (result <= 0) { 
        return 1; 
    } 
  
    // If s2 is smaller than s1 
    else { 
        return 0; 
    } 
} 
  
// Main function 
int main() 
{ 
    // Declare two strings 
    string s1 = "Ravindra"; 
    string s2 = "Kawade"; 
  
    // Concatenate the strings 
    string s3 = s1 + s2; 
  
    // Print the concatenated string 
    cout << s3 << endl; 
  
    // Compare the strings 
    bool result = (s1 <= s2); 
  
    // Print the comparison result 
    cout << result; 
  
    return 0; 
}