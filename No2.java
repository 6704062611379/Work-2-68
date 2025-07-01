/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package no2;
import java.util.Scanner;
/**
 *
 * @author student
 */
public class No2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the monthly saving amount: ");
        int money = input.nextInt();
        int i;
        double sum=0, m;
        for(i=0;i<6;i++){
            sum = (money+sum)*(1+0.00417);
        }
        System.out.println("After the sixth month, the account value is $"+String.format("%.2f",sum));
    }
    
}
