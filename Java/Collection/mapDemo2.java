import java.util.*;
class mapDemo2{
	public static void main(String[]args){
		ArrayList<String> al = new ArrayList<String>();
		HashMap<String,Integer> hm = new HashMap<String,Integer>();
		al.add("Lucknow");
		al.add("Kanpur");
		al.add("Allahabad");
		al.add("Kanpur");
		al.add("Allahabad");
		al.add("Allahabad");
		for(int i=0;i<al.size();i++){
			if(hm.get(al.get(i))!=null){
				hm.put( al.get(i), hm.get(al.get(i))+1);
			}else{
				hm.put(al.get(i),1);
			}
		}

		hm.forEach((k,v)->{
                        System.out.println(k+" "+v);
                });
	}
}
