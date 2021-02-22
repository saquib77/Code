#include<bits/stdc++.h>
#include<experimental/filesystem>
using namespace std;
namespace fs=std::experimental::filesystem;
int main(){
	fs::path fp{"/home/saquib/Code/filehandling/demoDir"};
	fs::create_directory(fp);
	fs::path fp1{"/home/saquib/Code/filehandling/Demodir"};
	//fs::create_directories(fp1);
	//fs::remove(fp);
	fs::rename(fp,fp1);
	return 0;
}
