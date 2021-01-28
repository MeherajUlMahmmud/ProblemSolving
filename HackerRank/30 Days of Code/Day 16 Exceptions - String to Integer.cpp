int main(){
    string S;
    cin >> S;
    
    try {
        int convertedInt;
        convertedInt = stoi(S);
        cout << convertedInt;
    } catch(exception e) {
        cout << "Bad String";
    }
    
    return 0;
}