class Solution {
public:
    string tobinary(int n){
        string binary = "";

        while (n > 0) {
        binary = char((n % 2) + '0') + binary;
        n /= 2;
        }
        return binary;

    }
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));

        string years = tobinary(year);
        string months = tobinary(month);
        string days = tobinary(day);

        string ans ="";
        for(int i=0;i<years.length();i++){
            ans.push_back(years[i]);
        }
        ans.push_back('-');
        for(int i=0;i<months.length();i++){
            ans.push_back(months[i]);
        }
        ans.push_back('-');
        for(int i=0;i<days.length();i++){
            ans.push_back(days[i]);
        }
        
        return ans;
    }
};