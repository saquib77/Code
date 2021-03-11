import java.util.*;
class FactoryMethodGenralized{
	static HashMap<String,Object> hm = new HashMap<>();
	synchronized public static Object getInstance(String s) throws Exception{
		Object obj = hm.get(s);
		if(obj != null ) return obj;
		else{
			Class cl = Class.forName(s);
			obj = cl.newInstance();
			hm.put(s,obj);
		}
		return obj;
	}
	public static void main(String[] args){
		try{
			String s = (String)FactoryMethodGenralized.getInstance("java.lang.String");
		}catch(Exception e){}
	}
}

