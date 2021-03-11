import java.util.logging.*;
class Loggr{
	public static void main(String[]args){
		Logger logg = Logger.getLogger("abc.xyz");
		logg.setLevel(Level.WARNING);
		logg.warning("This is First Warning");
		Logger logg1 = Logger.getLogger("abc.xyz");
		logg1.info("This is Second Warning");
		if(logg==logg1) System.out.println("Same");
	}
}
