class MyClass <T> {
	T t;
}
class MyMain{
	public static void main(String[] args){
		MyClass<Integer> m =new MyClass<Integer>();
		m.t=20;
		int k = m.t.intValue();
		System.out.println(k);
	}
}
