#include <string>


class Solution {
public:
    bool isAnagram(const std::string& s, const std::string& t) {
        
        int alphabetS[26]={0};
        frequency(alphabetS, s);

        int alphabetT[26]={0};
        frequency(alphabetT, t);
        
        for (int i = 0; i < 26; i++)
        {
            if (alphabetS[i] != alphabetT[i])
            {
                return false;
            }
            
        }

        return true;
        
    }

private:
int * frequency(int* arr,const std::string& str ) {


   
   for (char c: str) {
      arr[c-'a']++;
   }

   return arr;

    }
};