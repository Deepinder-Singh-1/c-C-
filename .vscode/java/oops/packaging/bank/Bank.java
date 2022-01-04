
//we will use this file as package so that we divide the work for us
//we will include this file in the main file
//this will allow the main file to access the data of sub file in the main file
//kinda inheritence but there are different files in this 

package oops.packaging.bank;
class Account{
    public String name;
    protected String email;
    private String password;

    //getters& Setters
    public String getPassword(){
        return this.password;
    }
    public void setPassword(String pass){
        this.password=pass;
    }


}

public class Bank{
    public static void main(String[] args) {
        Account account1=new Account();
        account1.name="Deepinder Singh Sran";
        account1.email="deepinder@gmail.com";
        account1.setPassword("abcd");
        System.out.println(account1.getPassword());
    }

}