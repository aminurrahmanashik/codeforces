/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
  import java.util.Scanner;
import java.math.BigInteger;
import java.io.BufferedReader; 
/**
 *
 * @author Asus
 */
public class acmsguru_99999_122_a {
   public static void main(String[] args){
       Scanner input = new Scanner(System.in);
       
       BigInteger a = input.nextBigInteger();
       BigInteger b = input.nextBigInteger();
       
       BigInteger ApowB = a.pow(b.intValue());
       BigInteger BpowA = b.pow(a.intValue());
       BigInteger ans = ApowB.subtract(BpowA);
       System.out.println(ans);
   }
}
    

