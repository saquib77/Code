#include<bits/stdc++.h>
#include<experimental/filesystem>
using namespace std;
namespace fs=std::experimental::filesystem;
int main(){
	fs::path filepath{"/home/saquib/Code/filehandling/fdemo.txt"};
	if(fs::exists(filepath)){
		cout<<filepath.native()<<endl;
		filepath.replace_filename("fsdemo.txt");
		cout<<filepath.native()<<endl;
		cout<<"has_root_name : "<<filepath.has_root_name()<<endl;
		cout<<"has_root_directory : "<<filepath.has_root_directory()<<endl;
		cout<<"has_root_path : "<<filepath.has_root_path()<<endl;
		cout<<"has_relative_path : "<<filepath.has_relative_path()<<endl;
		cout<<"has_parent_path : "<<filepath.has_parent_path()<<endl;
		cout<<"has_filename : "<<filepath.has_filename()<<endl;
		cout<<"has_stem : "<<filepath.has_stem()<<endl;
		cout<<"has_extension : "<<filepath.has_extension()<<endl;
	}
	return 0;
}
