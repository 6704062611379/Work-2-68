/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package linearequation;
import java.util.Scanner;

/**
 *
 * @author student
 */
public class LinearEquation {
    private double a,b,c,d,e,f;

    public LinearEquation(double a,double b,double c,double d,double e,double f){
        this.a = a;
        this.b = b;
        this.c = c;
        this.d = d;
        this.e = e;
        this.f = f;
    }
        
    public double getA() { return a; }
    public double getB() { return b; }
    public double getC() { return c; }
    public double getD() { return d; }
    public double getE() { return e; }
    public double getF() { return f; }
            
    public boolean isSolvable(){
        return a*d-b*c != 0;   
    }

    public double getX(){
        return ((e*d)-(b*f))/((a*d)-(b*c));      
    }

    public double getY(){
        return ((a*f)-(e*c))/((a*d)-(b*c));  
    }

}
   class AlgebraTest {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double a = input.nextDouble();
        double b = input.nextDouble();
        double c = input.nextDouble();
        double d = input.nextDouble();
        double e = input.nextDouble();
        double f = input.nextDouble();
        
        LinearEquation q = new LinearEquation(a,b,c,d,e,f);
        
        if(q.isSolvable()){
            System.out.println("x is "+q.getX()+" y is "+q.getY());
        }else{
            System.out.println("The equation has no solution");
        }
           
    }
}
   