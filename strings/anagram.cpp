/*Brute-Force Approach
The basic idea of this approach is to sort both the strings and compare the characters of the sorted strings.

Sort both strings.
Compare the characters of the sorted strings*/




bool areAnagram(string &str1, string &str2){
    // Get lengths of both strings.
    int n1 = str1.length();
    int n2 = str2.length();

    // If length of both strings is not same, then they cannot be anagram.
    if (n1 != n2){
       return false;
    }

    // Sort both the strings.
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare sorted strings.
    for (int i = 0; i < n1; i++){
        if (str1[i] != str2[i]){
            return false;
        }
    }
    return true;
}
