#include<iostream>
#include<experimental/filesystem>
#include<iomanip>
#include<sys/types.h>
#include<sys/stat.h>

using namespace std;
using namespace std::experimental::filesystem;
using namespace std::chrono;
//namespace fs=std::experimental::filesystem;

void describe(const path& spath){
	try{
		for(const auto& entry : directory_iterator(spath)){
			auto filename = entry.path().filename();
			if(is_directory(entry.status())){
				cout<<"     *\t\t\t"<<filename<<endl;
			}else if(is_regular_file(entry.status())){
				cout<<"     -\t\t\t"<<filename<<endl;
			}else cout<<"? "<<filename<<endl;
		}
	}catch(const exception& e){
		cout<<e.what()<<endl;
	}
}

int main(){
	cout<<"Enter Path :";
	string s;
	cin>>s;
	const path spath{s};
	cout<<"dir->(*)/file->(-)\t"<<"filename"<<endl;
	describe(spath);
	return 0;
}
