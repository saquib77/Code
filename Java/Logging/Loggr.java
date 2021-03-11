import java.util.logging.*;
class Loggr{
	public static void main(String[]args){
		Logger logg = Logger.getGlobal();
		logg.log(Level.INFO,"Second Log");
	}
}
