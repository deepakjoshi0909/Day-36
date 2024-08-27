class Solution {
public:
    string one[20] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", 
                      "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", 
                      "Eighteen", "Nineteen"};
    
    string ten[10] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    string numToWords(int n) {
        if (n >= 1000000000) return numToWords(n / 1000000000) + " Billion" + (n % 1000000000 ? " " + numToWords(n % 1000000000) : "");
        if (n >= 1000000) return numToWords(n / 1000000) + " Million" + (n % 1000000 ? " " + numToWords(n % 1000000) : "");
        if (n >= 1000) return numToWords(n / 1000) + " Thousand" + (n % 1000 ? " " + numToWords(n % 1000) : "");
        if (n >= 100) return numToWords(n / 100) + " Hundred" + (n % 100 ? " " + numToWords(n % 100) : "");
        if (n >= 20) return ten[n / 10] + (n % 10 ? " " + one[n % 10] : "");
        return one[n];
    }

    string numberToWords(int num) {
        if (num == 0) return "Zero";
        return numToWords(num);
    }
};
