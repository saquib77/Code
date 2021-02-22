class MyClass{
	int x;
	private MyClass(){}
	void printer(){
		System.out.println("Hello");
	}
	static MyClass m=null;
	synchronized public static MyClass factory(){
		if(m==null) m=new MyClass();
		return m;
	}
}

class FactoryMain{
	public static void main(String[]args){
		MyClass m1=MyClass.factory();
		m1.printer();
		m1.x=20;
		MyClass m2=MyClass.factory();
		System.out.println(m1.x+" "+m2.x);
	}
}
