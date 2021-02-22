#include<bits/stdc++.h>
#include<experimental/filesystem>
using namespace std;
namespace fs=std::experimental::filesystem;
int main(){
	fs::path filepath{"/home/saquib/Code/filehandling/fdemo.txt"};
	if(fs::exists(filepath)){
		cout<<"is_block_file : "<<fs::is_block_file(filepath)<<endl;
		cout<<"is_character_file : "<<fs::is_character_file(filepath)<<endl;
		cout<<"is_regular_file : "<<fs::is_regular_file(filepath)<<endl;
		cout<<"is_symlink : "<<fs::is_symlink(filepath)<<endl;
		cout<<"is_empty : "<<fs::is_empty(filepath)<<endl;
		cout<<"is_directory : "<<fs::is_directory(filepath)<<endl;
		cout<<"is_fifo : "<<fs::is_fifo(filepath)<<endl;
		cout<<"is_socket : "<<fs::is_socket(filepath)<<endl;
		cout<<"is_other : "<<fs::is_other(filepath)<<endl;
	}
	return 0;
}
