class Solution
{
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1, j = b.size() - 1, carry = 0; // i, j are the index of a, b
        string res; // res is the result
        while (i >= 0 || j >= 0) { // while there are still digits in a, b
            int sum = carry; // sum is the sum of the current digits
            if (i >= 0) sum += a[i--] - '0'; // add the digit of a
            if (j >= 0) sum += b[j--] - '0'; // add the digit of b
            res.push_back(sum % 2 + '0'); // add the digit of sum to the result
            carry = sum / 2; // carry is the carry of sum
        }
        if (carry) res.push_back(carry + '0'); // if there is a carry, add it to the result
        reverse(res.begin(), res.end()); // reverse the result
        return res; // return the result
    }
};