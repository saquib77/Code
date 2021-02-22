    #include<iostream>
    #include<string.h>
    using namespace std;
    int main (){
        char str[]="Hello World";
        int count = 0, i; 
        for (i = 0; str[i] != '\0';i++){
            if (str[i] == ' ') count++;    
        }
        cout << "Number of words in the string are: " << count + 1;
        return 0;

    }
