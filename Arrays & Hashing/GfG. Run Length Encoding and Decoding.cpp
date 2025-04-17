// GfG. Run Length Encoding and Decoding
// https://www.geeksforgeeks.org/run-length-encoding/
// Conplexity: O(n), O(n) storage
// Notes: Actually there is no need for newStr and extra complext stuff I did, you can just print directly in each iteration, with O(1) storage instead
// Follow up:

void printRLE(string str){
    string newStr = "";
    for(int i=0; i<str.size(); i++){
        char tmp = str[i];
        int j = i;
        int count = 0;
        
        while(j < str.size() && tmp == str[j]){
            count++;
            j++;
        }
        
        newStr = newStr + tmp + to_string(count);
        i = i + count - 1;
    }
    cout << newStr;
}

int main() {
    string str = "wwwwaaadexxxxxx";
    printRLE(str);
    return 0;
}