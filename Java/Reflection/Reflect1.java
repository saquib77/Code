package refPkg;
class Reflect1{
	public static void main(String[]args){
		try{
			Class c = Class.forName("refPkg.Reflect");
			Reflect r = (Reflect)c.newInstance();
			r.printer();
		}catch(Exception e){
			e.printStackTrace();
		}
	}
}
