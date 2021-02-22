class MyClass{
	static int age;
	String name;
	MyClass(int a,String s){
		age=a;
		name=s;
	}
	public static void main(String[] args){
		MyClass m=new MyClass(20,"Saquib");
		MyClass m1=new MyClass(21,"Mujeeb");
		System.out.println(MyClass.age);
		System.out.println(m.name);
		System.out.println(MyClass.age);
		System.out.println(m1.name);
	}
}
