/**
 * CharacterLiteral
 */
public class CharacterLiteral {

    public static void main(String[] args) {
        
        char literal = 'a';

        char numberLiteral = 15397;

        char binaryLiteral = 0b1111101011;

        char octalLiteral = 0121;

        char hexadecimalLiteral = 0xFace;

        // char decimalLiteral = 9.5; ==> we wil get compile time error

        System.out.println(literal);
        System.out.println(numberLiteral);
        System.out.println(binaryLiteral);
        System.out.println(octalLiteral);
        System.out.println(hexadecimalLiteral);
    }
    
}