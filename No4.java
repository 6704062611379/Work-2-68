/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package no4;
import java.util.Scanner;
/**
 *
 * @author student
 */
public class No4 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter balance and interest rate (e.g., 3 for 3%): ");
        double a = input.nextDouble();
        double b = input.nextDouble();
        double interest= a*(b/1200);
        System.out.print("The interest is "+interest);
    }
    
}
