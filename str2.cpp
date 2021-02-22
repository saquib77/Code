
    #include<bits/stdc++.h>
    #include<string.h>
    using namespace std;
    int main (){
        char str[][50]={"Hello World is", "high", "GayatriPrasad", "Dubey"};
        int len=strlen(str[0]);
       // sort(begin(str),end(str));
        for(int i=0;i<len;i++){
			for(int j=0;j<len;j++){
				cout<<str[i][j]<<" ";
			}
		}
		cout<<endl;
        return 0;

    }
