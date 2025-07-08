/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package complextest;
import java.util.Scanner;

class Complex {
    private double r, i;
    Complex(double r, double i) {
        this.r = r; this.i = i;
    }
    Complex(Complex c) {
        this(c.r, c.i);
    }
    public void add(Complex c) {
        this.r += c.r;
        this.i += c.i;
    }
    public void sub(Complex c) {
        this.r -= c.r;
        this.i -= c.i;
    }
    
    public void mul (Complex c){
        double tmp1, tmp2;
        tmp1 = (this.r * c.r) - (this.i*c.i);
        tmp2 = (this.r*c.i) + (this.i*c.r);
        this.r = tmp1;
        this.i = tmp2;
    }
    public void divid (Complex c){
        double temp1, temp2;
        temp1 = ((this.r*c.r) + (this.i*c.i)) / (Math.pow(c.r,2)+Math.pow(c.i,2));
        temp2 = ((this.r*c.i) - (this.i*c.r)) / (Math.pow(c.r,2)+Math.pow(c.i,2));
        this.r = temp1;
        this.i = temp2;
    }
    
    public void print() {
        System.out.println(r + " + i " + i);
    }
}
class ComplexTest{
    public static void main(String args[]) {
        Complex a = new Complex(1.0, 2.0);
        Complex b = new Complex(3.0, 4.0);
        Complex c = new Complex(a);
        
        
        c.add(b);
        c.print();
       
        
        
        c.sub(b);
        c.print();
       
        
        
        c.mul(b);
        c.print();
        c = a;
        
        c.divid(b);
        c.print();
        
    }
}
