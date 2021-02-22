#include<bits/stdc++.h>
#include<experimental/filesystem>
using namespace std;
namespace fs=std::experimental::filesystem;
int main(){
	fs::path fpath;
	cout<<fpath.empty()<<endl;
	fs::path filepath{"/home/saquib/Code/filehandling/fdemo.txt"};
	if(fs::exists(filepath)){
		cout<<filepath.is_absolute()<<endl;
		cout<<filepath.is_relative()<<endl;
		cout<<filepath.native()<<endl;
		filepath.replace_filename("fsdemo.txt");
		filepath.replace_extension("cpp");
//		cout<<filepath.native()<<endl;
		//filepath.clear();
//		filepath.remove_filename();
		cout<<filepath.native()<<endl;
	}
	return 0;
}
