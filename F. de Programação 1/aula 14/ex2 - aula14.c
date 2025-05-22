/*Elabore uma função que receba por parâmetro o sexo (char) e a altura de uma pessoa (real), calcule e retorne seu peso ideal. 
Para isso, utilize as fórmulas a seguir:

Para homens: (72.7*altura) - 58
Para mulheres: (62.1*altura) – 44.7*/

void caracteristica(char sexo, float altura){
    float ideal = 0;

    if( sexo == "M" || sexo == 'm'){
        ideal = (72.7 * altura) -58; 
    }else if {
        ideal = (62.1 * altura) - 44.7;
    }
    return ideal;

}

int main(){
    char sexo;
    float altura;

    printf("Qual o seu sexo?(M para masculino ou F para feminino)");
    scanf("%c", &sexo);
    
    printf("Qual é a sua altura?");
    scanf("%.2f", &altura);

    float resultado = caracteristica(sexo, altura);
    printf("O seu peso ideal é %f\n", resultado);
    return 0;
}