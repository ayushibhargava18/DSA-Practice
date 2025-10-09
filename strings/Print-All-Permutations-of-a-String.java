import java.util.*;


public class Main
{
	public static void main(String[] args) {
		String s1 = "ABC";
		permute(s1, 0, s1.length()-1);
	}
	
	static void permute(String str, int l, int r){
	    if(l==r){
	        System.out.println(str);
	        return;
	    }
	    
	    for(int i=l; i<=r;i++){
	        str=swap(str, l, i);
	        permute(str, l+1, r);
	        str=swap(str, l, i);
	    }
	    
	    
	    }
	static String swap(String str, int i, int j){
	    char[] arr = str.toCharArray();
	    char temp=arr[i];
	    arr[i]=arr[j];
	    arr[j]=temp;
	    
	    return new String(arr);
	    
	}
	}

