import java.util.Arrays;
import java.util.Scanner;

public class GFG {

	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int a[] = {1,2,4,6,8};
		int findnum = 8;
		//Arrays.sort(a);;
		binarysearch(a,findnum);
		

	}
	static void binarysearch(int a[],int findnum)
	{
		int low = 0;
		int high = a.length-1;
		
		while(low<=high)
		{
			int mid = (low + high)/2;
			if(a[mid]==findnum)
			{
				System.out.print("the element is present at") ;
				System.out.println(mid+1);
				break;
			}
			else if(a[mid]>findnum)
			{
			     high = mid -1;
			}
			else
			{
				low = mid+1;
			}
		}
		
	}
}
