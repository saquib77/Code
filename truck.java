import java.util.*;
public class TruckAndLoad{
	ArrayList<Integer> selectPackages(int truckSpace,ArrayList<Integer> packagesSpace){
		Map<Integer,Integer> mp = new HashMap<>();
		int mx=Integer.MIN_VALUE;
		truckSpace-=30;
		ArrayList<Integer> lt = new ArrayList<>();
		for(int i = 0; i < packagesSpace.size();i++) {
		    int v = packagesSpace.get(i);
		    if(mp.containsKey(truckSpace-v)) {
		        int cmx=0;
			if(v > truckSpace-v) cmx = v;
			else cmx = truckSpace-v;
		        if(cmx > mx) {
		            mx = cmx;
		            lt = new ArrayList<>();
		            lt.add(mp.get(truckSpace-v));
		            lt.add(i);
		        }
		    }
		    mp.putIfAbsent(v,i);
		}
		return lt;
	}
}

