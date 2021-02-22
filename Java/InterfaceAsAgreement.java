interface APIinterface{
	void printer();
}
class API{
	void M(APIinterface ia){
		ia.printer();
	}
}
class Factory{
	public static API factory(){
		return new API();
	}
}

class MyClass implements APIinterface{
	public void printer(){
		System.out.println("Printer of MyClass");
	}
}

class APIMain{
	public static void main(String[]args){
		API ap = Factory.factory();
		ap.M(new MyClass());
	}
}

