//API

interface MyInterface{
	void printer();
}
class MyClass{
	void m(MyInterface mi){
		mi.printer();
	}
}

class Factory{
	public static MyClass factory(){
		return new MyClass();
	}
}


//Programmer Code

class Pcode{
	public static void main(String[]args){
		MyClass my=Factory.factory();
		my.m(new MyInterface(){
			public void printer(){
				System.out.println("Printer Method");
			}
		});
	}
}
