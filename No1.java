/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package no1;
import java.util.Scanner;
/**
 *
 * @author student
 */
public class No1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Fahrenheit: ");
        double f = input.nextDouble();
        double c = (f-32)*(5.0/9);
        System.out.println("Celsius = "+c);
    }
    
}
