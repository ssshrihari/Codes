package Collectionsclass;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Random;
class SortBySum implements Comparator<Integer>{

	int find_sum_1(Integer n) {
		int sum = 0;
        
        while (n != 0)
        {
            sum = sum + n % 10;
            n = n/10;
        }
        return sum;
	}

	int find_sum_2(Integer n) {
		int sum = 0;
        
        while (n != 0)
        {
            sum = sum + n % 10;
            n = n/10;
        }
        return sum;
	}
	@Override
	public int compare(Integer arg0, Integer arg1) {
		// TODO Auto-generated method stub
		
		int sum1=find_sum_1(arg0);
		int sum2=find_sum_2(arg1);
		if(sum1==sum2)
		{
			
			if(String.valueOf(arg0).length()==String.valueOf(arg1).length()) {
				return arg1-arg0;
			}
			return String.valueOf(arg1).length()-String.valueOf(arg0).length();
		}
		return sum2-sum1;
	}
	
}
public class basicmethods {
public static void main(String[] args) {
	List<Integer> list=new ArrayList<Integer>();
	Random r=new Random();
	for(int i=0;i<100;i++)
		list.add(r.nextInt(100));
	
	System.out.println(list);
    Collections.sort(list, new SortBySum());
    System.out.println(list);
	
}
}
