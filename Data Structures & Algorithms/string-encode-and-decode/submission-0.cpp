class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(string it:strs){
            s+=to_string(it.size())+"#"+it;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int length=stoi(s.substr(i,j-i));
            string word=s.substr(j+1,length);
            ans.push_back(word);
            i=j+1+length;

    }
    return ans;
    }
};
