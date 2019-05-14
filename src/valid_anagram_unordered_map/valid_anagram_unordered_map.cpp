#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(const std::string& s, const std::string& t) {
        return (frequency(s)==frequency(t));
    }

private:
    std::unordered_map<char, int> frequency(const std::string& string){
        std::unordered_map<char,int> umap;
        for(char c: string){
            umap[c]++;
        }

        return umap;
    }
};