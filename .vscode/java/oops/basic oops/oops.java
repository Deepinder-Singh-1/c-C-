package oops;
class Pen {
    String color;
    String type;//ball//gel
    public void Write(){
        System.out.println("Writing Something");
    }
    public void printcolor(){
        System.out.println(this.color);// this help the compalier to know who is accessing the function;
    }
}
class Student{
    String name;
    int age;
    public void printInfo(){
        System.out.println(this.name);
        System.out.println(this.age);
    }
    Student(Student s2){
        this.name=s2.name;
        this.age= s2.age;
    }
    Student(){

    }

}

public class oops {
    public static void main(String[] args) {
        Student s1= new Student();
        s1.name="Dishu";
        s1.age=18;
        Student s2= new Student(s1);
        s1.printInfo();
    }
    
}
