#include<bits/stdc++.h>
#include<experimental/filesystem>
using namespace std;
namespace fs=std::experimental::filesystem;
int main(){
	fs::path fp{"/home/saquib/Code/filehandling/fdemo.txt"};
	if(fs::exists(fp)){
		cout<<fs::file_size(fp)<<endl;
		auto aw=fs::last_write_time(fp).time_since_epoch();
		auto in_hrs=chrono::duration_cast<chrono::hours>(aw).count();
		cout<<in_hrs<<endl;
	}
	return 0;
}
