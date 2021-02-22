public interface MyInterface{
	void p1();
	void p2();
	void p3();
}

class MyClass implements MyIterface{
	public void p1();
        public void p2();
        public void p3();
}

class DemoClass extends MyClass{
	public void p1(){
		System.out.println("P1");
	}
}
