package refPkg;
class Reflect1{
	public static void main(String[]args){
		try{
			Class c = Reflect.class;
			Reflect r = (Reflect)c.newInstance();
			r.printer();
		}catch(Exception e){
			e.printStackTrace();
		}
	}
}
