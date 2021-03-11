class MyClass  {
	public static <T> String getLength(T t){
		return t.toString();
	}
}
class MyMain{
	public static void main(String[] args){
		String k = MyClass.<String>getLength("Lucknow");
		System.out.println(k);
	}
}
