package org.cjy.learning;

class Person{
	private String name;
	private int age;
	// constructor
	public Person(){
		
	}
	public Person(String name, int age){
		this.setName(name);	
		this.setAge(age);
	}
	// setter
	public void setName(String name){
		this.name = name;
	}
	public void setAge(int age){
		if(age>=0 && age<=150){
			this.age = age;
		}
		else{
			System.out.println("ERROR: Age must be 0~150!");
		}
	}
	// getter
	public String getName(){
		return this.name;
	}
	public int getAge(){
		return this.age;
	}
	// functions
	public void printInfo(){
		System.out.println("name " + this.getName() + " age " + this.getAge());
	}
	
}

public class OOP {

	public static void main(String[] args) {
		Person p = new Person();
		p.setName("Jack");
		p.setAge(-30);
		p.printInfo();
	}

}
