import java.util.logging.*;
class Loggr{
	public static void main(String[]args){
		Logger logg = Logger.getLogger("abc.xyz");
		logg.log(Level.FINE,"FIrst Fine Level Log");
	}
}
