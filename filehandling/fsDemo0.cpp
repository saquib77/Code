#include<bits/stdc++.h>
#include<fstream>
#include<bitset>
#include<experimental/filesystem>
using namespace std;
namespace fs=std::experimental::filesystem;

void demo_perms(fs::perms p){
    std::cout << ((p & fs::perms::owner_read) != fs::perms::none ? "r" : "-")
              << ((p & fs::perms::owner_write) != fs::perms::none ? "w" : "-")
              << ((p & fs::perms::owner_exec) != fs::perms::none ? "x" : "-")
              << ((p & fs::perms::group_read) != fs::perms::none ? "r" : "-")
              << ((p & fs::perms::group_write) != fs::perms::none ? "w" : "-")
              << ((p & fs::perms::group_exec) != fs::perms::none ? "x" : "-")
              << ((p & fs::perms::others_read) != fs::perms::none ? "r" : "-")
              << ((p & fs::perms::others_write) != fs::perms::none ? "w" : "-")
              << ((p & fs::perms::others_exec) != fs::perms::none ? "x" : "-")
              << '\n';
}

int main(){
	fs::path fpath{"/home/saquib/Code/filehandling/fdemo.txt"};
	std::string dir= "/home/saquib/Code/filehandling";
    	fs::create_directories(dir);

	fs::space_info root = fs::space("/");
    	fs::space_info usr = fs::space("/usr");
	std::cout << ".        Capacity       Free      Available\n"
              <<"/    " <<root.capacity<<"   "
              <<root.free<<"   "<<root.available<<"\n"
              <<"usr  "<<usr.capacity<<"   "
              <<usr.free<<"   "<<usr.available<<endl;



	std::cout << "Created file with permissions: ";
	demo_perms(fs::status("fdemo.txt").permissions());

	fs::permissions("fdemo.txt",fs::perms::owner_all | fs::perms::group_all);

	std::cout << "After adding o+rwx and g+rwx:  ";
	demo_perms(fs::status("fdemo.txt").permissions());


	cout<<"File Exists or Not : "<<fs::exists(fpath)<<endl;
	cout<<"File Name : "<<fpath.filename()<<endl;
	cout<<"File Name without ext : "<<fpath.stem()<<endl;
	cout<<"File Extension : "<<fpath.extension()<<endl;
	cout<<"File root path : "<<fpath.root_path()<<endl;
	cout<<"File parent path : "<<fpath.parent_path()<<endl;
	cout<<"File root name : "<<fpath.root_name()<<endl;
	cout<<"File relative path : "<<fpath.relative_path()<<endl;
	cout<<"File Directory  : "<<fs::is_directory(dir)<<endl;
	cout<<"File Size : "<<fs::file_size(fpath)<<endl;
	return 0;
}

