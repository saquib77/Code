interface APIinterface{
	void printer();
}
class API implements APIinterface{
	public void printer(){
		System.out.println("Printer of API");
	}
}
class Factory{
	public static APIinterface factory(){
		return new EAPI();
	}
}

class EAPI extends API{
	public void printer(){
		System.out.println("Printer of EAPI");
	}
}

class APIMain{
	public static void main(String[]args){
		APIinterface ap = Factory.factory();
		ap.printer();
	}
}
