package org.cjy.learning;

// Notice the differnce between public class & class.
public class Main { 

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num = 10;
		num = 30;
		System.out.println("num is: " + num);
		System.out.println("num * num is: " + num * num);
	}
}

//-----------------------------------------------------------------

package org.cjy.learning;

public class Array {

	public static void main(String[] args) {
		
		int[] score = new int[3];
		for(int i=0; i<score.length; i++){
			score[i] = 2 * i + 1;
		}
		for(int i=0; i<score.length; i++){
			System.out.println(score[i]);
		}
	}

}

//-----------------------------------------------------------------

package org.cjy.learning;

public class Array1 {

	public static void main(String[] args) {
		// sort
		int[] score = {67,89,87,69,90,100,75,90};
		java.util.Arrays.sort(score);
		print(score);
		System.out.println();
		
		// copy
		int[] array1 = {1,2,3,4,5,6,7,8,9};
		int[] array2 = {44,55,66,77,88,99};
		System.arraycopy(array1, 3, array2, 1, 3);
		print(array2);
	}
	
	public static void print(int[] temp){
		for(int i=0; i<temp.length; i++){
			System.out.print(temp[i] + " ");
		}
	}

}
